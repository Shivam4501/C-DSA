#include<iostream>
using namespace std;

int main(){
    char a[]="shivamo";
    // char h[6];
    // int i,j;
    // for(i=0;a[i]!='\0';i++){}
    // i=i-1;
    // for(j=0;i>=0;i--,j++){
    //     h[j]=a[i];
    // }
    // h[j]='\0';
    // cout<<h;

    int i,j,t;
    for(i=0;a[i]!='\0';i++){}
    i=i-1;
    for(j=0;j<i;j++,i--){
        t=a[j];
        a[j]=a[i];
        a[i]=t;
    }
    cout<<a;

return 0;
}