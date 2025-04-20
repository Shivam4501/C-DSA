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
void display(node *p)
{
    while (p != nullptr)
    {
        cout << p->data<<"  ";
        p = p->next;
    }
}
int issorted(node*p){
    int x=-64739;
    while(p){
        if(p->data<x)
        return 0;
        x=p->data;
        p=p->next;
    }
    return 1;
}

int main()
{
    int a[] = {5, 6, 8, 11, 17, 25};
    create(a, 6);
    
    if(issorted(head)==0)
    cout<<"The list is not sorted...";
    else
    cout<<"The list is sorted...";
    return 0;
}