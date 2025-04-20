#include<iostream>
using namespace std;

class node{
    public:
    node*prev;
    int data;
    node*next;
};
node*head=NULL;
void create(int a[],int n){
    node*temp;
    node*last;
    int i;

    head=new node;
    head->data=a[0];
    head->prev=head->next=head;
    last=head;

    for(i=1;i<n;i++){
        temp=new node;
        temp->data=a[i];
        temp->next=last->next;
        temp->prev=last;

        last->next=temp;
        last=temp;
    }
    head->prev=last;
    last->next=head;
}
void insert(int value, int position, node*& head) {
    node* newNode = new node;
    newNode->data = value;

    if (position == 0) {
        if (head == NULL) {
            head = newNode;
            head->next = head->prev = head;
        } else {
            newNode->next = head;
            newNode->prev = head->prev;
            head->prev->next = newNode;
            head->prev = newNode;
            head = newNode;
        }
    } else {
        node* current = head;
        for (int i = 0; i < position - 1; i++) {
            current = current->next;
        }
        newNode->next = current->next;
        newNode->prev = current;
        current->next->prev = newNode;
        current->next = newNode;
    }
}
void Delete(int position, node*& head) {
    if (head == NULL) {
        return;
    }

    node* temp = head;

    if (position == 0) {
        if (head->next == head) { 
            delete head;
            head = NULL;
        } else {
            head->prev->next = head->next;
            head->next->prev = head->prev;
            head = head->next;
            delete temp;
        }
    } else {
        for (int i = 0; i < position - 1; i++) {
            temp = temp->next;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }
}
void display(node*p){
   node*temp=p;
   do{
       cout<<temp->data<<"  ";
       temp=temp->next;
       
   }while(temp!=p);
}
int length(node*p){
    int l=0;
    node*temp=p;
    do{
     l++;
     temp=temp->next;
    }while(temp!=p);
    return l;
}
int main(){
    int a[]={1,2,3,4,5,6};
    create(a,6);
    cout<<"Linked List : "<<endl;
    display(head);
    cout<<endl;
    
    cout<<"Insertion : "<<endl;
    insert(31,4,head);
    display(head);
    cout<<endl;
    
    cout<<"Deletion : "<<endl;
    Delete(5,head);
    display(head);
    
    cout<<endl;
    cout<<"Length of Linked List : "<<endl<<length(head)<<" elements..";
    
    return 0;
}
