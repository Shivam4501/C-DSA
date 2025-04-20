#include<iostream>
using namespace std;
class array{
    int* a;
    int size;
    int length;

    public:
    array(int arr[],int s,int l){
        a=new int[s];
        for(int i=0;i<l;i++)
        a[i]=arr[i];
        size=s;
        length=l;
    }
    ~array(){
        delete[]a;
    }
    void display(){
        cout<<"Elements are : ";
        for(int i=0;i<length;i++)
        cout<<a[i]<<"  ";
        cout<<endl;
    }
    void reverse(){
        int* B;
        B=new int[length];
        for(int i=length-1,j=0;i<j;i--,j++)
        B[j]=a[i];
        for(int i=0;i<length;i++)
        a[i]=B[i];
        delete[]B;
    }

    void swap(int &y,int &n){
        int temp=y;
        y=n;
        n=temp;
    }
    void rev(){
        for(int i=0,j=length-1;i<j;i++,j--){
            swap(a[i],a[j]);
        }
    }
};
int main(){
    int arr[]={1,89,5,6,5,48,7};
    array ay(arr,10,7);
    cout<<"Before reversing array : ";
    ay.display();
    ay.reverse();
    ay.display();

    ay.rev();
    ay.display();

return 0;
}