#include<iostream>
using namespace std;
class lower{
    int n;
    int* a;
    public:
    lower(int n){
        this->n=n;
        a=new int[n*(n+1)/2];
    }
    ~lower(){
        delete []a;
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
};
void lower::set(int i,int j,int x){
    if(i>=j)
    a[i*(i-1)/2+j-1]=x;
}
int lower :: get(int i,int j){
    if(i>=j)
    return a[i*(i-1)/2+j-1];
    return 0;
}

void lower::display(){
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(i>=j)
            cout<<a[i*(i-1)/2+j-1]<<"  ";
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
    lower l(d);

    int x;
    cout<<"Enter all elements : ";
    for(int i=1;i<=d;i++){
        for(int j=1;j<=d;j++){
            
                cin>>x;
            l.set(i,j,x);
            
           }
    }
    l.display();
return 0;
}