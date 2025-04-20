#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
   
};
node*head;

void create(int a[],int n){
    head=new node;
    node*temp;
    node*last;

    head->data=a[0];
    head->next=nullptr;
    last=head;

    for(int i=1;i<n;i++){
        temp=new node;
        temp->data=a[i];
        temp->next=nullptr;

        if(last==nullptr){
            head->next=temp;
            last=temp;
        }
        else{
            last->next=temp;
            last=temp;
        }
    }
}
int count(node*p){
    int c=0;
    while(p){
        c++;
        p=p->next;
        }
         cout<<p<<" ";
       
    }
    void display(node*p){
    if(p!=nullptr){
        cout<<p->data<<"  ";
        display(p->next);
    }
}

void sinsert(node *p,int x){
    node*t;
    node*q=NULL;
    
    t=new node;
    t->data=x;
    t->next=NULL;
    
    if(head==NULL){
        head=t;
    }
    else{
        while(p&&p->data<x){
            q=p;
            p=p->next;
        }
        if(p==head){
            t->next=head;
            head=t;
        }
        else{
            t->next=q->next;
            q->next=t;
        }
    }
}
int main(){
    int a[]={15,30,45,60,75,90,105,120};
        create(a,8);
       
       sinsert(head,50);
        display(head);
    return 0;
}