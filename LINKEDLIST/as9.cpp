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
int count(node *p)
{
    int c = 0;
    while (p)
    {
        c++;
        p = p->next;
    }
  return c;
}
int Delete(node *p, int index)
{
    node *q = NULL;
    int x = -1;

    if (index < 1 || index > count(p))
    {
        return x;
    }
    else if (index == 1)
    {
        q = head;
        x = head->data;
        head = head->next;
        delete q;
        return x;
    }
    else
    {
        q=nullptr;
        for (int i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
        return x;
    }
}
int main()
{
    int a[] = {5, 6, 8, 1, 7, 5};
    create(a, 6);
    cout << Delete(head, 2);
    display(head);
    return 0;
}
