#include<iostream>
using namespace std;

class node{
    public: 
    int data;
    node*next;
};
node*head=NULL;

void create(int a[],int n){
    int i;
    node*temp;
    node*last;
    
    head=new node;
    head->data=a[0];
    head->next=head;
    last=head;
    
    for(i=1;i<n;i++){
        temp=new node;
        temp->data=a[i];
        temp->next=last->next;
        last->next=temp;
        last=temp;
    }
}
void display(node*h){
    do{
        cout<<h->data<<"  ";
        h=h->next;
    }while(h!=head);
    cout<<endl;
}
int length(node*p){
    int len=0;
    do{
        len++;
        p=p->next;
    }while(p!=head);
    return len;
}

void insert(node*p,int index,int x){
    node*temp;
    int i;
    if(index<0 || index>length(p)){
        return;
    }
    else if(index==0){
        temp=new node;
        temp->data=x;
        if(head==NULL){
            head=temp;
            head->next=head;
        }
    else{
        while(p->next!=head)
        p=p->next;
        temp->next=head;
        p->next=temp;
        head=temp;
    }
}
    else{
        for(i=0;i<index-1;i++)
        p=p->next;
        
        temp=new node;
        temp->data=x;
        temp->next=p->next;
        p->next=temp;
    }
}
int Delete(node*p,int index){
    node*q;
    int i,x;

    if(index<0 || index>length(p)){
        return -1;
    }
    if(index==1){
        while(p->next!=head)
        p=p->next;

        x=head->data;
        if(head==p){
            delete head;
            head=NULL;
        }
        else{
            p->next=head->next;
            delete head;
            head=p->next;
        }
    }
    else{
        for(i=0;i<index-2;i++)
        p=p->next;
        q=p->next;
        p->next=q->next;
        x=q->data;
        delete q;
    }
    return x;

}
int main(){
    int a[]={21,2,3,4,5,56};
    create(a,6); 
    cout<<"Linked List : "<<endl;
    display(head);
    cout<<"Length of linked list : "<<length(head);
    cout<<"Insertion : "<<endl;
    insert(head,3,65);
    display(head);
    cout<<"deletion : "<<endl;
    Delete(head,6);
    display(head);
    return 0;
}