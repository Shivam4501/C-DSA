#include<iostream>
using namespace std;

int main(){
    int a[10];
    int n,x,i;
    int pos;
    cout<<"Enter the size of Array : "<<endl;
    cin>>n;
    cout<<"Enter the elements in array : "<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];

    cout<<"Array is : "<<endl;
    for(int i=0 ; i<n;i++)
    cout<<a[i]<<"  ";
    cout<<endl;

    cout<<"Enter the element to search : "<<endl;
    cin>>x;

    for(i=0;i<n;i++){
        if(a[i]==x){
        cout<<"Element is present at "<<i<<"th index"<<endl;
        cout<<"Element is present at "<<(i+1)<<"th position"<<endl;
        break;
    }
    }
    if(i==n)
    cout<<"Element not present in given array";

return 0;
}