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
void Insert(node*p,int index,int x){
    node*temp;
    int i;
     if(index < 0 || index > length(p)){
        return ;
    }
    if(index==0){
        temp=new node;
        temp->data = x;
        temp->prev = NULL;
        temp->next=first;
        first->prev=temp;
        first=temp;

    }
    else{
        for(i=0;i<index-1;i++)
        p=p->next;
        temp=new node;
        temp->data=x;

        temp->prev=p;
        temp->next=p->next;
        if(p->next)
        p->next->prev=temp;
        p->next=temp;
    }
}
int Delete(struct node*p,int index){
    struct node*q;
    int x=-1;
    int i;

    if(index<1 || index>length(p))
    return -1;

    if(index==1){
        first=first->next;
        if(first)
        first->prev=NULL;

        x=p->data;
        delete p;
    }
    else{
        for(i=0;i<index-1;i++)
            p=p->next;
        p->prev->next=p->next;
        if(p->next)
        p->next->prev=p->prev;
        x=p->data;
        delete p;
    }
    return x;
}
int main(){
    int a[]={15,6,5,9,6,4};
    create(a,6);
    cout<<"Length of Linked List is : "<<length(first)<<endl;
    cout<<"Linked List : ";
    display(first);
    cout<<"Insertion : "<<endl;
    Insert(first,6,89);
    display(first);
    cout<<"Deletion : "<<endl;
    Delete(first,3);
    display(first);
    return 0;
}