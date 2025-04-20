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

     void insert(node*p,int index,int x){
        // node*head;
        node*t;
        if(index<0||index>count(p))
        return;
        t=new node;
        t->data=x;
        t->next=nullptr;
        if(index==0){
            t->next=head;
            head=t;
        }
        else{
            for(int i=0;i<index-1;i++){
                p=p->next; }
                t->next=p->next;
                p->next=t;
           
        }
        
    }
int main(){
    int a[]={15,65,48,6,54,56,45,540};
        create(a,8);
       
        display(head);
        cout<<endl;
        insert(head,0,10);
        insert(head,1,89);
        display(head);
    return 0;
}