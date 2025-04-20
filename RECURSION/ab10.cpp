#include<iostream>
using namespace std;
// ITERATIVE
// int fib(int n){
//     int t=0;
//     int y=1;
//     int s;
//     if(n<=1)
//     return n;
//     else
//         for(int i=2;i<=n;i++){
//             s=t+y;
//             t=y;
//             y=s;
//         }
//         return s;
// }
// RECURSION
// int fib(int n){
//     if(n<=1)
//     return 1;
//     else
//     return fib(n-2)+fib(n-1);
// }
// MEMOIZATION
int f[9];
int fib(int n)
{
    if(n<=1){
        f[n]=n;
        return n;
    }
    else{
        if(f[n-2]==-1)
         f[n-2]=fib(n-2);
        if(f[n-1]==-1)
         f[n-1]=fib(n-1);
         f[n]=f[n-2]+f[n-1];
        return f[n-2]+f[n-1];
    }
        
}
    
int main(){
    // int h=fib(3);
    // cout<<h;
   
    for( int i=0;i<=9;i++){
        f[i]=-1;
        
    }
    cout<<fib(5);

return 0;
}