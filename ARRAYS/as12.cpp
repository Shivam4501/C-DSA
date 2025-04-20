#include<iostream>
using namespace std;
class is{
    int* a;
    int size;
    int length;

    public:
    is(int arr[],int s,int l){
        a=new int[s];
        for(int i=0;i<l;i++){
           a[i]=arr[i];
        }
        size= s;
        length= l;
    }
    // void display(){
    //     cout<<"Elements are : "<<endl;
    //     for(int i=0;i<length;i++)
    //     cout<<a[i];
    // }
    bool sort(){
        for(int i=0;i<length-1;i++){
            if(a[i]>a[i+1]){
                return false;
            }
            
        }
        return true;
    }
};
int main(){
    int arr[]={2,5,6,9,32,45,56};
    is t(arr,10,7);
    cout<<(t.sort() ? "Array is sorted" : "Array is not sorted");

return 0;
}