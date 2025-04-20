#include<iostream>
using namespace std;
// TAYLOR
//USING RECURSION
// int e(int x,int n){
//     static int p=1,f=1;
//     int r;

//     if(n==0)
//     return 1;

//     else r=e(x,n-1);
//     p=p*x;
//     f=f*n;
//     return r+p/f;
// }
//USING HORNER'S RULE
    // int t(int y,int w){
    //     static int s=1;
    //     if(w==0)
    //     return s;
    //     else
    //     s=(1+y/w)*s;
    //     return t(y,w-1);
    // }
// BY ITERATIVE APPROACH
    double ee(int x,int n){
        double s=1;
        double num=1;
        double den=1;

        for (int i=0;i<=n;i++){
            num=num*x;
            den=den*i;
            s=s+num/den;
        }
        return s;
    }
int main(){
    // int r=e(4,5);
    // cout<<r;
    // int q=t(4,5);
    // cout<<q;
    int t=ee(1,5);
    cout<<t;

return 0;
}