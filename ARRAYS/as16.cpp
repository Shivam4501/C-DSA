#include<iostream>
using namespace std;

int main(){
    // int a[10]={6,3,8,10,16,7,5,2,9,14};
    // int n=10;
    // int k=10;
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(a[i]+a[j]==k){
    //             cout<<a[i]<<" and "<<a[j]<<" gives sum equal to "<<k<<endl;
    //         }
    //     }
    // }

    // // hash table
    // int h[17]={0};
    // for(int i=0;i<n;i++){
    //     if(h[k-a[i]]!=0){
    //         cout<<(a[i]+(k-a[i]));
    //     }
    //     h[a[i]]++;
    // }
    int a[10]={1,3,4,5,6,8,9,10,12,14};
    int n=10,k=10,i=0,j=n-1;
    while (i<j){
       if(a[i]+a[j]==k){
        cout<<a[i]<<"  "<<a[j]<<endl;
        i++;
        j--;
       } 
       else if(a[i]+a[j]<k)
       i++;
       else
       j--;
    }


return 0;
}