#include<iostream>
using namespace std;

int main(){
    int a[10];
    int n;
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

    // for(int i=0;i<n-1;i++)
    // a[i]=a[i+1];

    // n--;
    // cout<<endl;

    // cout<<"After deleting first element : "<<endl;

    // for(int i=0 ; i<n;i++)
    // cout<<a[i];

    // n--;
    // cout<<"Array after deleting last element : "<<endl;

    // for(int i=0;i<n;i++)
    // cout<<a[i]<<"   ";

    cout<<"Enter the position of element,you want to delete : "<<endl;
    cin>>pos;

    for(int i=pos-1;i<n;i++)
    a[i]=a[i+1];

    n--;
    cout<<"After deleting element at "<<pos<<"nd position : "<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<"  ";

return 0;
}