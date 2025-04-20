#include<iostream>
using namespace std;

int main(){
// int A[3][4]={{2,3,4,5},{6,7,8,9},{5,4,3,6}};

// for(int i=0;i<3;i++){
//     for(int j=0;j<4;j++)
//         cout<<"  "<<A[i][j];
//         cout<<endl;     
// }

int*B[3];
int **V;

B[0]=new int[4];
B[1]=new int[4];
B[2]=new int[4];

V=new int*[3];
    V[0]=new int[4];
    V[1]=new int[4];
    V[2]=new int[4];

return 0;
}