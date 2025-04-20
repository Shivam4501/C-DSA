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
void remdup(node*p){
    node*q=p->next;
    while(q){
        if(p->data!=q->data){
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
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
    int a[] = {6, 8, 11, 17, 25,25,25,35,35};
    create(a, 9);
    remdup(head);
    display(head);
    return 0;
}