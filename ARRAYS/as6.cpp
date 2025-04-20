#include<iostream>
using namespace std;

int main(){
    // INSERTION AT BEGINNING
    // int a[10];
    // int n,x;
    // int i;
    // cout<<"Enter size of an array : "<<endl;
    // cin>>n;
    // cout<<"Enter elements in array : "<<endl;
    // for(i=0;i<n;i++){
    // cin>>a[i];
    // }
    // cout<<"Array befrore insertion :"<<endl;
    // for(i=0;i<n;i++){
    // cout<<a[i]<<endl;
    // }
    // cout<<"Enter element to be inserted at beginning : " <<endl;
    // cin>>x;
    
    // for(i=n;i>0;i--){
    // a[i]=a[i-1];
    // }
    // a[0]=x;
    // n++;

    // cout<<"Array elements are: "<<endl;
    // for(i=0;i<n;i++){
    // cout<<a[i]<<endl;
    // }


    // INSERTION AT END
    //  int a[10];
    // int n,x;
    // int i;
    // cout<<"Enter size of an array : "<<endl;
    // cin>>n;
    // cout<<"Enter elements in array : "<<endl;
    // for(i=0;i<n;i++){
    // cin>>a[i];
    // }
    // cout<<"Array befrore insertion :"<<endl;
    // for(i=0;i<n;i++){
    // cout<<a[i]<<endl;
    // }
    // cout<<"Enter element to be inserted at last : " <<endl;
    // cin>>x;
    
    // a[n]=x;
    // n++;

    // cout<<"array after insertion :"<<endl;
    // for(i=0;i<n;i++){
    // cout<<a[i]<<"  "; 
    // }
   //INSERTION AT SPECIFIC POSITION
     int a[10];
    int n,x,pos;
    int i;
    cout<<"Enter size of an array : "<<endl;
    cin>>n;
    cout<<"Enter elements in array : "<<endl;
    for(i=0;i<n;i++){
    cin>>a[i];
    }
    cout<<"Array befrore insertion :"<<endl;
    for(i=0;i<n;i++){
    cout<<a[i]<<endl;
    }
    cout<<"Enter the position : "<<endl;
    cin>>pos;
    cout<<"Enter element to be inserted : " <<endl;
    cin>>x;

    for(i=n;i>pos-1;i--){
        a[i]=a[i-1];
    }
    a[pos-1]=x;
    n++;

    for(i=0;i<n;i++){
        cout<<a[i]<<"   ";
    }
return 0;
}