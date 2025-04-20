#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    for(int i=0; i<size-1; i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int a[10] = {1,52,3,4,5};
    cout << (isSorted(a, 5) ? "Array is sorted" : "Array is not sorted") << endl;

    return 0;
}
