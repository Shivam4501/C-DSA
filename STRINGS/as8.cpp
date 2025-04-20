#include<iostream>
using namespace std;

int main(){
char a[]="madam";
char b[6];
    int i,j;
    for(i=0;a[i]!='\0';i++){}
    i=i-1;
    for(j=0;i>=0;i--,j++){
        b[j]=a[i];
    }
    b[j]='\0';
 
    for(i=0,j=0;a[i]!='\0',b[j]!='\0';i++,j++){
    if(a[i]!=b[j]){
        break;
    }
    }
    if(a[i]==b[j])
    cout<<"Given string is in palindrome";
    else
    cout<<"Not a palindrome";


return 0;
}