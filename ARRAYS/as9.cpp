#include<iostream>
using namespace std;
int a[10],n,x;
// int bs(int low,int high){
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(a[mid]==x){
//             return mid;
//         }
//         else if (a[mid]>x)
//         {
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
    
//         return -1;
    
// }
// int main(){
//     cout<<"Enter the size of array : "<<endl;
//     cin>>n;
//     cout<<"Enter the sorted elements in array : "<<endl;
//     for(int i=0;i<n;i++){
//     cin>>a[i];
//     }
//     cout<<"Array is : "<<endl;
//     for(int i=0;i<n;i++){
//     cout<<a[i]<<"    ";
//     }
//     cout<<endl;
//     cout<<"Enter the element to search in array : ";
//     cin>>x;
//     int result = bs(0,n-1);
//     if(result==-1){
//     cout<<"Element not found in given array ";
//     }
//     else
//         cout<<"Element found at "<<result<<" index";
// return 0;
// }
//BINARY SEARCH  
int bs(int low , int high){
    if(low>high){
        return -1;
    }
    else{
        int mid=(low+high)/2;
        if(a[mid]==x)
        return mid;

        else if(a[mid]>x)
        return bs(low,mid-1);

        else
        return bs(mid+1,high);

    }
}
int main(){
    cout<<"Enter size of array ";
    cin>>n;

    cout<<"Enter elements in sorted order : "<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];

    cout<<"Array : ";
    for(int i=0;i<n;i++)
    cout<<a[i]<<"  ";
    cout<<endl;
    cout<<"Enter the element to search : ";
    cin>>x;

    int result = bs(0,n-1);
    if(result==-1){
    cout<<"Element not found";
    }
    else{
        cout<<"Element found at "<<result <<" index";
    }
    return 0;
}