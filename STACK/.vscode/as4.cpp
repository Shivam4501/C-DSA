#include<iostream>
#include<cstring>
// #include<stack>
using namespace std;

class stack{
    struct node{
        char data;
        node*next;
    }*top;

    public:
    stack(){
        top=nullptr;
    }

    void push(char x){
        node*t=new node();
        if(t==nullptr){
            cout<<"Stack is full"<<endl;
        }
        else{
            t->data=x;
            t->next=top;
            top=t;
        }
    }
    char pop(){
        node*t;
        char x=-1;
        if(top==nullptr){
            cout<<"Stack is empty"<<endl;
        }
        else{
            t=top;
            top=top->next;
            x=t->data;
            delete t;
        }
        return x;
    }
    void display(){
        node*p=top;
        while(p!=nullptr){
            cout<<p->data<<"  ";
            p=p->next;
        }
        cout<<endl;
    }
    bool isempty(){
        return top==nullptr;
    }
    char stacktop(){
        if(top)
        return top->data;
        return -1;
    }
};
bool isbalanced(const char*exp){
    stack stk;
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='('){
            stk.push(exp[i]);
        }
        else if(exp[i]==')'){
            if(stk.isempty())
            return false;
            stk.pop();
        }
    }
    return stk.isempty();
}
int pre(char x){
    if(x=='+'||x=='-')return 1;
    if(x=='*'||x=='/')return 2;
    return 0;
}
bool isoperand(char x){
    if(x=='+'||x=='-'||x=='*'||x=='/')return false;
    return true;
}
char*intopost(const char* infix){
    stack stk;
    int i=0,j=0;
    int len=strlen(infix);
    char*postfix=new char[len+2];

    stk.push('#');

    while(infix[i]!='\0'){
        if(isoperand(infix[i])){
            postfix[j++]=infix[i++];
        }
        else{
            if(pre(infix[i]) > pre(stk.stacktop())){
                stk.push(infix[i++]);
            }
            else{
                postfix[j++]=stk.pop();
            }
        }
    }
    while(!stk.isempty()&&stk.stacktop()!='#'){
        postfix[j++]=stk.pop();
    }
    postfix[j]='\0';
    return postfix;
}
int main(){
    const char*infix="a+b*c-d/e+";
    char* postfix=intopost(infix);

    cout<<postfix<<endl;

    delete []postfix;

return 0;
}