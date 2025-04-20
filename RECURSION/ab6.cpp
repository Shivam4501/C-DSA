#include<iostream>
using namespace std;
int sum(int n){
    if(n==0)
    return 0;
    return sum(n-1)+n;
}
int main(){
    int t=sum(5);
    cout<<t;

return 0;
}
//SUM OF NATURAL NUMBERS