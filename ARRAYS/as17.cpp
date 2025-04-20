#include<iostream>
using namespace std;

int main(){
    int a[10]={5,8,3,-9,6,20,10,7,-1,4};
    int n=10;
    int min=a[0];
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
        else if(a[i]>max){
            max=a[i];
        }
    }
    cout<<"Minimum element of array is : "<<min<<endl;
    cout<<"Maximum element of array is : "<<max;
return 0;
}