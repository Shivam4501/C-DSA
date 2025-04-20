#include<iostream>
using namespace std;

class node{
    public:
    node*prev;
    int data;
    node*next;
};
node*first=NULL;

void create(int a[],int n){
    node*temp,*last;
    int i;

    first=new node;
    first->data=a[0];
    first->prev=first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        temp=new node;
        temp->data=a[i];
        temp->next=last->next;
        temp->prev=last;
        last->next=temp;
        last=temp;
    }
}
void display(node*p){
    while(p){
        cout<<p->data;
        p=p->next;
        cout<<"  ->  ";
    }
    cout<<endl;
}
int length(node*p){
    int len=0;

    while(p){
        len++;
        p=p->next;
    }
    return len;
}
void reverse(node*p){
    node*temp;

    while(p!=NULL){
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p && p->next==NULL)
        first=p;
    }
}

int main(){
    int a[]={15,6,5,9,6,4};
    create(a,6);
    cout<<"Length of Linked List is : "<<length(first)<<endl;
    cout<<"Linked List : ";
    display(first);
    cout<<"After reverse : "<<endl;
    reverse(first);
    display(first);
    return 0;
}