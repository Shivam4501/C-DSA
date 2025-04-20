#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
};

class queue{
    node*front;
    node*rear;

    public:
    queue();
    ~queue();
    void enqueue(int x);
    int dequeue();
    bool isempty();
    void display();
};

queue::queue(){
    front = nullptr;
    rear=nullptr;
}

void queue::enqueue(int x){
    node*t=new node;
    if(t==nullptr){
        cout<<"Queue Overflow "<<endl;
    }
    else{
        t->data=x;
        t->next=nullptr;
        if(front==nullptr){
            front=t;
            rear=t;
        }
        else{
            rear->next=t;
            rear=t;
        }
    }
}

int queue::dequeue(){
    int x=-1;
    node*p;
    if(isempty()){
        cout<<"Queue underflow"<<endl;
    }
    else{
        p=front;
        front=front->next;
        x=p->data;
        delete p;
    }
    return x;
}

bool queue::isempty(){
    if(front==nullptr){
        return true;
    }
    return false;
}

queue::~queue(){
    node*p=front;
    while(front){
        front=front->next;
        delete p;
        p=front;
    }
}

void queue::display(){
    node*p=front;
    while(p){
        cout<<p->data<<flush;
        p=p->next;
        if(p!=nullptr){
            cout<<" <- "<<flush;
        }
    }
    cout<<endl;
}
int main(){
    int a[]={1,2,3,4,5};

    queue q;

    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        q.enqueue(a[i]);
    }

    q.display();
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        q.dequeue();
    } 
    q.dequeue();
return 0;
}