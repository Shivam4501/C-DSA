#include<iostream>
using namespace std;
// int power(int m,int n){
//     if(n==0)
//     return 1;
//     return power(m,n-1)*m;
// }
int pow(int m,int n){
    if(n==0)
    return 1;
    if(n%2==0)
    return pow(m*m,n/2);
    return m*pow(m*m,(n-1)/2);
}
int main(){
    int u=pow(2,5);
    cout<<u;
return 0;
}
// POWER FUNCTION