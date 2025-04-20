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
    // int count(node *p){
    //     int c=0;
    //     while (p!=0){
    //         c++;
    //         p=p->next;
    //     }
    //     cout<<c;
    //     {
    //         /* code */
    //     }
        
    // }
    int rcount(node *p){
        if(p==0)
        return 0;
        else
        return rcount(p->next)+1;
    }
    int add(node *p){
        int sum=0;
        while(p){
            sum=sum+p->data;
            p=p->next;
        }
        return(sum);
    }
    int radd(node *p){
        if(p==0)
        return 0;
        else
        return radd(p->next)+p->data;
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
    // cout<<count(head);
    // while(p!=nullptr){
    //     cout<<p->data<<"  ->   ";
    //     p=p->next;
    // }
    cout<<rcount(head);
    cout<<endl;
    cout<<add(head);
    cout<<endl;
    cout<<radd(head);
    
return 0;
}