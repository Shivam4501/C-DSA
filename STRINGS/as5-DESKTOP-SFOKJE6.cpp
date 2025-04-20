#include<iostream>
using namespace std;
int valid(char *a){
    int i;
    for(i=0;a[i]!='\0';i++){
        if((a[i]>=65 && a[i]<=90 ) || (a[i]>=97 && a[i]<=122) ||(a[i]>=48 && a[i]<=57))
        continue;
        else
    return 0;
    }
        return 1;
}
int main(){
    char a[]="3^4ac";
    // if(valid(a)>0)
    // cout<<"true";
    // else
    // cout<<"false";
    cout<<(valid(a)  ?  "true"   :  "false");
return 0;
}