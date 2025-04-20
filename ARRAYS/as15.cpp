#include<iostream>
using namespace std;

int main(){
    // int a[10]={2,2,4,5,6,7,8,8,9,10};
    // int n=10,ladiff=0;
    // for (int i = 0; i < n; i++)
    // {
    //     if(a[i]==a[i+1]&&a[i]!=ladiff){
    //         cout<<a[i]<<"  ";
    //         ladiff=a[i];
    //     }
    // }

    // int a[10]={2,2,4,5,6,7,8,8,9,10};
    // int n=10,j;
    // for (int i = 0; i < n-1; i++)
    // {
    //   if(a[i]==a[i+1]){
    //     j=i+1;
    //     while(a[j]==a[i])
    //     j++;
    //     cout<<a[i]<<" is appearing "<<(j-i)<<" times"<<endl;
    //     i=j-1;
    //   }
    // }
    // USING HASHING
    // int a[10]={2,2,4,5,6,7,8,8,9,19};
    // int H[20]={0};
    // int n=10,l=2,h=19;
    // for(int i=0;i<n;i++){
    //     H[a[i]]++;
    // }
    // for(int i=0;i<=h;i++){
    //     if(H[i]>0)
    //     cout<<i<<" "<<H[i]<<"  ";
    // } 

    // DUPLICATES IN UNSORTED ARRAY

    int a[10]={8,3,6,4,6,5,6,8,2,7};
    int i,j,n=10;
    for(int i=0;i<n-1;i++){
    int count=0;
    if(a[i]!=-1){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                a[j]=-1;
            }
        }
    if(count>0){
    cout<<a[i]<<"  ";
    }
    }
    }
return 0;
}