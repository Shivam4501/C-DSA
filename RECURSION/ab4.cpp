#include<iostream>
using namespace std;
void funn(int n);
void fun(int n){
    if(n>0){
    cout<<n;
    funn(n-1);
    }
}
void funn(int n){
    if(n>1){
    cout<<n;
    fun(n/2);
    }
}
int main(){
fun(20);
return 0;
}
//INDIRECT RECURSION