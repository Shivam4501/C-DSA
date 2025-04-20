#include<iostream>
using namespace std;

class Cqueue{
    int size;
    int front;
    int rear;
    int *t;

    public:
    Cqueue(int size);
    ~Cqueue();
    bool isfull();
    bool isempty();
    void enqueue(int x);
    int dequeue();
    void display();
};

Cqueue::Cqueue(int size){
    this->size=size;
    front=0;
    rear=0;
    t=new int[size];
}

Cqueue::~Cqueue(){
    delete []t;
}

bool Cqueue::isempty(){
    if(front==rear){
        return true;
    }
    return false;
}

bool Cqueue::isfull(){
    if(rear==size-1)
    return true;
    return false;
}

void Cqueue::enqueue(int x){
    if(isfull()){
    cout<<"Queue Overflow..."<<endl;
    }
    else{
        rear=(rear+1)%size;
        t[rear]=x;
    }
}

int Cqueue::dequeue(){
    int x=-1;
    if(isempty()){
        cout<<"Queue Underflow..."<<endl;
    }
    else{
        front=(front+1)%size;
        x=t[front];
    }
    return x;
}

void Cqueue::display(){
   int i=front+1;
   do{
    cout<<t[i]<<flush;
    if(i<rear)
    cout<<" <- "<<flush;
    i=(i+1)%size;
   }while(i!=(rear+1)%size);
   
    cout<<endl;
}
int main(){

    int a[]={1,2,23,43,22};
    Cqueue cq(sizeof(a)/sizeof(a[0])+1);

    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        cq.enqueue(a[i]);
    }
    cq.display();

    cq.enqueue(45);

    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        cq.dequeue();
    }

    // q.display();

    cq.dequeue();

    return 0;
}