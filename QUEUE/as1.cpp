#include<iostream>
using namespace std;

class queue{
    int size;
    int front;
    int rear;
    int *t;

    public:
    queue(int size);
    ~queue();
    bool isfull();
    bool isempty();
    void enqueue(int x);
    int dequeue();
    void display();
};

queue::queue(int size){
    this->size=size;
    front=-1;
    rear=-1;
    t=new int[size];
}

queue::~queue(){
    delete []t;
}

bool queue::isempty(){
    if(front==rear){
        return true;
    }
    return false;
}

bool queue::isfull(){
    if(rear==size-1)
    return true;
    return false;
}

void queue::enqueue(int x){
    if(isfull()){
    cout<<"Queue Overflow..."<<endl;
    }
    else{
        rear++;
        t[rear]=x;
    }
}

int queue::dequeue(){
    int x=-1;
    if(isempty()){
        cout<<"Queue Underflow..."<<endl;
    }
    else{
        front++;
        x=t[front];
    }
    return x;
}

void queue::display(){
    for(int i=front+1;i<=rear;i++){
        cout<<t[i]<<flush;
        if(i<rear){
            cout<<" <- "<<flush;
        }
    }
    cout<<endl;
}
int main(){

    int a[]={1,2,23,43,22};
    queue q(sizeof(a)/sizeof(a[0]));

    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        q.enqueue(a[i]);
    }
    q.display();

    q.enqueue(45);

    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        q.dequeue();
    }

    q.display();

    q.dequeue();

    return 0;
}