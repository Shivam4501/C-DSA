#include<iostream>
using namespace std;

int main(){
    int *u,*j;
    int i;
    u=new int[5];
    u[0]=5;
    u[1]=4;
    u[2]=45;
    u[3]=95;
    u[4]=48;

    j=new int[10];

    for(i=0;i<5;i++)
        j[i]=u[i];
        delete[]u;

        u=j;
        u=NULL;

        for(i=0;i<5;i++){
            cout<<j[i]<<endl;
        }

return 0;
}