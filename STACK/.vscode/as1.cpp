#include<iostream>
using namespace std;
// Stack using Array

class stack{
    private:
    int size;
    int top;
    int *s;

    public:
    stack(int size);
    ~stack();
    void push(int x);
    int pop();
    int peek(int index);
    int isempty();
    int isfull();
    void display();
    int stacktop();
};

stack::stack(int size){
    this->size=size;
    top=-1;
    s=new int[size];
}
stack::~stack(){
    delete []s;
}
void stack::push(int x){
    if(isfull()){
        cout<<"Stack overflow "<<endl;
    }
    else{
        top++;
        s[top]=x;
    }
}
int stack::pop(){
    int x=1;
    if(isempty()){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        x=s[top];
        top--;
    }
    return x;
}
int stack::peek(int index){
    int x=-1;
    if(top-index+1 < 0 || top-index+1 == size){
        cout<<"Invalid position "<<endl;
    }
    else{
        x=s[top-index+1];
    }
    return x;
}
int stack::isfull(){
    if(top==size-1){
        return 1;
    }
    return 0;
}
int stack::isempty(){
    if(top == -1){
        return 1;
    }
    return 0;
}
void stack::display(){
    for(int i=top;i>=0;i--){
        cout<<s[i]<<"  |  ";
    }
    cout<<endl;
}
int stack:: stacktop(){
    if(isempty()){
        return -1;
    }
    return s[top];
}
int main(){
    int a[]={1,2,3,4,5,6};
    stack stk(sizeof(a)/sizeof(a[0]));

    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        stk.push(a[i]);
    }
    stk.push(11);

    cout<<"Stack full : "<< stk.isfull()<<endl;

    // Display stack
    cout<<"Stack : "<<flush;
    stk.display();

    // peek
    cout<<"Peek at 0th : "<<stk.peek(0)<<endl;

    // top element
    cout<<"Top element : "<<stk.stacktop()<<endl;

    // pop out elements from stack
    cout<<"popped out elements: "<<flush;
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        cout<<stk.pop()<<" , "<<flush;
    }
    cout<<endl;
    stk.pop();

    cout<<"Stack empty : "<<stk.isempty()<<endl;

return 0;
}