#include<iostream>
using namespace std;
class Array{
    int a[10];
    int size;
    int length;
    public:
    Array(int* arr,int s,int l){
 
        size=s;
        length=l;
        for(int i=0;i<length;i++)
        a[i]=arr[i];
    }
    void display(){
        cout<<"Elements are : ";
        for(int i=0;i<length;i++)
        cout<<a[i]<<"  ";
    }
    int get(int index){
        if(index>=0 && index<length)
        return a[index];
        return -1;
    }
    void set(int index,int x){
        if(index>=0 && index<length)
        a[index]=x;
    }
    int max(){
        int max=a[0];
        for(int i=1;i<length;i++){
        if(a[i]>max)
        max=a[i];
        }
        return max;
    }
    int min(){
        int min=a[0];
        for(int i=1;i<length;i++){
            if(a[i]<min)
            min=a[i];
        }
        return min;
    }
    int sum(){
        int s=a[0];
        for(int i=1;i<length;i++){
        s=s+a[i];
        }
        return s;
    }
    int avg(){
        int s=a[0];
        for(int i=1;i<length;i++){
        s=s+a[i];
        }
        return s/length;
    }
    };

int main(){
   int input[7]={45,48,46,56,12,31,52};
    Array arr = {input,10,7};
    arr.set(5,45);
    arr.display();
    cout<<endl;
    int y=arr.get(4);
    cout<<"The element is "<<y;
    cout<<endl;
    int g=arr.max();
    cout<<"The max element is "<<g<<endl;

    int h=arr.min();
    cout<<"The min element is "<<h<<endl;

   cout<<"The sum of given array is : "<< arr.sum()<<endl;

   cout<<"The avg of given array is: "<<arr.avg();
return 0;
}