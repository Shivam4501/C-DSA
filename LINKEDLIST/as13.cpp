#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
node *head=nullptr;
node*first=nullptr;
node*second=nullptr;

void create(int a[], int n)
{
    head = new node;
    node *temp;
    node *last=nullptr;

    head->data = a[0];
    head->next = nullptr;
    last = head;

    for (int i = 1; i < n; i++)
    {
        temp = new node;
        temp->data = a[i];
        temp->next = nullptr;

        
            last->next = temp;
            last = temp;
        
    }
} 
void create2(int b[], int n)
{
    first = new node;
    node *temp;
    node *last=nullptr;

    first->data = b[0];
    first->next = nullptr;
    last = first;

    for (int i = 1; i < n; i++)
    {
        temp = new node;
        temp->data = b[i];
        temp->next = nullptr;

        
            last->next = temp;
            last = temp;
        
    }
} 
// void concat(node*p,node*q){
//     second=p;
//     while(p->next){
//         p=p->next;
//     }
//     p->next=q;
// }
void merge(node*p,node*q){
    node*last;
    if(p->data<q->data){
        second=last=p;
        p=p->next;
        second->next=NULL;
    }
    else{
        second=last=q;
        q=q->next;
        second->next=NULL;       
    }
    while(p&&q){
        if(p->data < q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p)
    last->next=p;
    else
    last->next=q;
}
int count(node*p){
    int c=0;
    while(p){
        c++;
        p=p->next;
        }
        return c;
       
    }
void display(node *p)
{
    while (p != nullptr)
    {
        cout << p->data<<"  ";
        p = p->next;
    }
}

int main()
{
    int a[] = {6, 8, 11, 17, 25};
    int b[]={12,24,36,48,60};
    create(a, 5);
    create2(b,5);
    // concat(first,head);
    merge(head,first);
    
    cout<<"First"<<endl;
    display(head);
    cout<<endl<<endl;

    cout<<"Second"<<endl;
    display(first);
    cout<<endl<<endl;

    // cout<<"Concatinated : "<<endl;
    // display(second);
    // cout<<endl<<endl;
    
    // cout<<"Length of concatinated list : "<<count(second)<<endl;
    cout<<"Merged list is : "<<endl;
    display(second);
    cout<<endl<<endl;

    cout<<"Length of Merged list is : "<<count(second);
   return 0;
}