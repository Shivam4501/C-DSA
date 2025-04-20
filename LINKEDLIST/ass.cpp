#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
void display(node*p){
    if(p!=nullptr){
        cout<<p->data<<"  ";
        display(p->next);
    }
}
// int count(node*p){
//     int c=0;
//     while(p){
//         c++;
//         p=p->next;
//         }
//          cout<<p<<" ";
       
//     }
    int count(node*p){
        if(p==0){
            return 0;
        }
        else
        return count(p->next)+1;
    }
    int add(node*p){
        int sum=0;
        while(p){
            sum=sum+p->data;
            p=p->next;
        }
        return(sum);
    }
    int radd(node*p){
        if(p==0){
            return 0;
        }
        else{
            int sum=radd(p->next)+p->data;
        }
    }
    int max(node*p){
        int m=-32768;
        while(p){
            if(p->data>m)
            m=p->data;
            p=p->next;
        }
        return m;
    }
    // int rmax(node*p){
    //     int x=0;
    //     if(p==0)
    //     return 0;
    //     else{
    //         x=rmax(p->next);
    //         if(x < p->next)
    //         return p->data;
    //         else 
    //         return x;
    //     }
    // }

int main(){
    int a[]={15,65,48,6,54,56,45,540};
    node*head=new node;
    node*temp;
    node*last;

    head->data=a[0];
    head->next=nullptr;

    for(int i=1;i<sizeof(a)/sizeof(a[0]);i++){
        node*temp=new node;
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
       
        display(head);
        cout<<endl;
        cout<<count(head);
        cout<<endl;
        cout<<add(head);
        cout<<endl;
        cout<<radd(head);
        cout<<endl;
        cout<<max(head);
        cout<<endl;
        // cout<<rmax(head);
    return 0;
}