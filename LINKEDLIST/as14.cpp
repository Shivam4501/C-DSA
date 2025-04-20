#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
node *head = nullptr;
node *first = nullptr;
node *second = nullptr;

void create(int a[], int n)
{
    head = new node;
    node *temp;
    node *last = nullptr;

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
int isloop(node *l)
{
    node *p, *q;
    p = q = l;

    do
    {
        p = p->next;
        q = q->next;
        if (q)
        {
            q = q->next;
        }
    } while (p && q && p != q);

    if (p == q)
        return 1;
    else
        return 0;
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
void display(node *p)
{
    while (p != nullptr)
    {
        cout << p->data << "  ";
        p = p->next;
    }
}

int main()
{
    int a[] = {6, 8, 11, 17, 25};
    node *t1;
    node *t2;

    create(a, 5);

    t1 = head->next->next;
    t2 = head->next->next->next->next;
    t2->next = t1;

    cout << isloop(head) << endl
         << endl;
    if (isloop(head) == 1)
        cout << "List is in a loop";
    else
        cout << "List is not in a loop";
}