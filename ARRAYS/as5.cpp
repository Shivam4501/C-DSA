#include<iostream>
using namespace std;

class array{
    int* A;
    int length ;
    int size;

public:
    array(int size){
        this->size=size;
        A=new int[size];

    }
    void create(){
        cout<<"Enter number of elements : "<<flush;
        cin>>length;
        cout<<"Enter the array elements : "<<endl;
        for(int i=0;i<length;i++){
            cout<<"Array element : "<<i<<" = "<<flush;
            cin>>A[i];
        }
    }
    void display(){
        for(int i=0;i<length;i++){
            cout<<A[i]<<"  ";
        }
    }
    ~array(){
        delete[]A;
        cout<<endl;
        cout<<"Array destroyed "<<endl;
    }
};
int main(){
    array arr(10);    
    arr.create();
    arr.display();
return 0;
}