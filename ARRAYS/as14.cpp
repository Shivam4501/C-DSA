#include<iostream>
using namespace std;

int main(){
    // FOR FIRST N NATURAL NUMBERS 
    // int a[]={1,2,3,4,5,6,7,9,10};
    // int n=10;
    // int sum=0;
    // for(int i=0;i<9;i++){
    //     sum=sum+a[i];
    // }
    // int s=n*(n+1)/2;
   
    // cout<<"Missing term is : "<<(s-sum);

    // FOR RANDOM SORTED NATURAL NUMBERS
//     int a[]={5,6,7,8,9,10,11,13,14,15};
//     int l=5,h=15,n=10;

//     int diff=5-0;
//     int i;
//     for(int i=0;i<10;i++){
//         if(a[i]-i!=diff){
//         cout<<(i+diff)<<endl;}
//         break;
//     }
// return 0;
// }
// FOR MULTIPLE MISSING TERMS..
    // int a[]={5,6,7,9,10,11,13,14,15};
    // int l=5,h=15,n=9;

    // int diff=5-0;
    // int i;
    // for(int i=0;i<n;i++){
    //     if(a[i]-i != diff){
    //         while(diff<a[i]-i){
    //             cout<<(i+diff)<<endl;
    //             diff++;
    //         }
    //     }
    // }
    // FOR MULTIPLE MISSING TERMS USING HASH TABLE..
    int a[]={5,6,7,9,10,11,13,14,15};
    int h[15]={0};
    int l=5,x=15,n=9;
    for(int i=0;i<n;i++){
        h[a[i]]++;
    }
    for(int i=5;i<=x;i++){
        if(h[i]==0)
        cout<<i<<"  ";
    }

return 0;
}
