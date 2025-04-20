#include<iostream>
#include<cstring>
using namespace std;
// Parenthesis Matching

class stack{
    private:
    int size;
    int top;
    char*s;
    public:
    stack(int size);
    ~stack();
    void push(char x);
    char pop();
    char peek(int index);
    int isfull();
    int isempty();
    void display();
    char stacktop();
};

stack::stack(int size){
    this->size=size;
    top=-1;
    s=new char[size];
}
stack::~stack(){
    delete[]s;
}
void stack::push(char x){
    if(isfull()){
        cout<<"Stack overflow "<<endl;
    }
    else{
        top++;
        s[top]=x;
    }
}
char stack::pop(){
    char x=1;
    if(isempty()){
        cout<<"Stack underflow "<<endl;
    }
    else{
        x=s[top];
        top--;
    }
    return x;
}
char stack::peek(int index){
    char x=-1;
    if(top-index+1<0||top-index+1==size){
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
    if(top==-1){
        return 1;
    }
    return 0;
}
void stack::display(){
    for(int i=top;i>=0;i--){
        cout<<s[i]<<" | "<<flush;
    }
    cout<<endl;
    }
char stack::stacktop(){
    if(isempty()){
        return -1;
    }
    return s[top];
}
bool isbal(char*exp){
    // create a stack
    stack stk((int)strlen(exp));

    for(int i=0;i<strlen(exp);i++){

        if(exp[i]=='('){
            stk.push(exp[i]);
        }
        else if(exp[i]==')'){
            if(stk.isempty()){
                return false;
            }
            else{
                stk.pop();
            }
        }
    }
    return stk.isempty()?true:false;
}

int main(){
    char e[]="((a+b)*(c-d))";
    cout<<isbal(e)<<endl;

    char f[]="((a+b)*(c-d)))";
    cout<<isbal(f)<<endl;

    char g[]="(((a+b)*(c-d))";
    cout<<isbal(g)<<endl;        
}