#include<iostream>
using namespace std;
int fact(int m){
    if(m<=1)
    return 1;
    return fact(m-1)*m;
}
int nc(int n,int r){
    int num,den;

    num=fact(n);
    den=fact(r)*fact(n-r);
}
// int c(int n,int r){
//     if(r==0||n==r)
//     return 1;
//     else
//     return c(n-1,r-1)+c(n-1,r);
// }
int main(){
    // int r=c(5,3);
    // cout<<r;
    int r=nc(5,5);
    cout<<r;

return 0;
}