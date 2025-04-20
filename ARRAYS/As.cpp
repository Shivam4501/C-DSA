#include<iostream>
using namespace std;

int main(){
    int A[5]={4,5,6,45,56};
    for(int i=0;i<5;i++)
        cout<<A[i]<<endl;

    for(int i=0;i<5;i++)
        cout<<&A[i]<<endl;

return 0;
}