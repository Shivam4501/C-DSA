#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
node *head=nullptr;

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
int count(node*p){
    int c=0;
    while(p){
        c++;
        p=p->next;
        }
         cout<<p<<" ";
       
    }
void display(node *p)
{
    while (p != nullptr)
    {
        cout << p->data<<"  ";
        p = p->next;
    }
}
void reverse(node*p){
    int*A,i=0;
    node*q=p;
    A=new int[count(p)];

    while(q){
        A[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q){
        q->data=A[i];
        q=q->next;
        i--;
    }
} 

void reverse2(node*p){
    node*q=nullptr;
    node*r=nullptr;
    
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head=q;
}
void reverse3(node*q,node*p){
    if(p){
        reverse3(p,p->next);
        p->next=q;
    }
    else
    head=q;
}
int main()
{
    int a[] = {6, 8, 11, 17, 25,25,25,35,35};
    create(a, 9);
    reverse(head);
    display(head);
    cout<<endl;
    reverse2(head);
    display(head);
    cout<<endl;
    reverse3(nullptr,head);
    display(head);
    return 0;
}