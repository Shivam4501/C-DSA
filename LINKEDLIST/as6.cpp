#include<iostream>
using namespace std;
class node{
    public: 
    int data;
    node *next;
};
void display(node *p){
    
        if(p!=NULL){
            cout<<p->data<<"  ";
            display(p->next);
        }
    }
int max(node *p){
    int m=-32768;
    while(p){
        if(p->data>m)
        m=p->data;
        p=p->next;
    }
    return m;
}
int rmax(node *p){
    int x=0;
    if(p==0)
    return 0;
    else{
        x=max(p->next);
        if(x>p->data)
        return x;
        else
        return p->data;
    }
}
node *search(node *p,int key){
    while(p){
        if(key==p->data)
        return p;
        p=p->next;
    }
    return nullptr;
}
node *rsearch(node *p,int key){
    if(p==NULL)
    return NULL;
    else if(key==p->data)
    cout<<"found at : "<<p;
    return rsearch(p->next,key);
}

int main(){
    int a[]={2,1,23,4,56,65};

    node*head=new node;
    node *temp;
    node *last;

    head->data=a[0];
    head->next=nullptr;

    for(int i=1;i<sizeof(a)/sizeof(a[0]);i++){
        node *temp=new node;
        temp->data=a[i];
        temp->next=nullptr;
        
        if(last==nullptr){
        head->next = temp;
            last = temp;
        }
        else {
            last->next = temp;
            last = temp;
        }
}
    node*p=head;
    display(head);
    cout<<endl;
    cout<<max(head);
    cout<<endl;    
    cout<<rmax(head);
    cout<<endl;
    cout<<search(head,1)->data;
    cout<<endl;
    cout<<rsearch(head,65)->data;
    
return 0;
}