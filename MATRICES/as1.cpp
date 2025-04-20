#include<iostream>
using namespace std;
class diagonal{
    int n;
    int* a;
    public:
    diagonal(int n){
        this->n=n;
        a=new int[n];
    }
    ~diagonal(){
        delete []a;
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
};
void diagonal::set(int i,int j,int x){
    if(i==j)
    a[i-1]=x;
}
int diagonal :: get(int i,int j){
    if(i==j)
    return a[i-1];
    return 0;
}

void diagonal::display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
            cout<<a[i]<<"  ";
            else
            cout<<"0  ";
        }
        cout<<endl;
    }
}
int main(){
    int d;
    cout<<"Enter dimension : "<<endl;
    cin>>d;
    diagonal l(d);

    int x;
    cout<<"Enter all elements : ";
    for(int i=1;i<=d;i++){
        for(int j=1;j<=d;j++){
            if(j==i){
                cin>>x;
            l.set(i,j,x);
            }
           }
    }
    l.display();
return 0;
}