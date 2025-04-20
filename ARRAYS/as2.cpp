#include<iostream>
using namespace std;

int main(){
    int p[5]={1,23,43,54,64};
    int *t;
    int i;

    t=new int[5];
    t[0]=34;
    t[1]=3;
    t[2]=4;
    t[3]=45;
    t[4]=23;

    for(i=0;i<5;i++)
        cout<<p[i]<<endl;

    for(i=0;i<5;i++)
        cout<<t[i]<<endl;

        delete []t;

return 0;
}