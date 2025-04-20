#include<iostream>
using namespace std;

int main(){
char a[]="them";
char b[]="then";
int i,j;

for(i=0,j=0;a[i]!='\0',b[j]!='\0';i++,j++){
    if(a[i]!=b[j]){
        break;
    }
}
if(a[i]==b[j])
cout<<"Equal string ";

else if(a[i]>b[j])
cout<<a<<" is bigger";

else
cout<<b<<" bigger";

return 0;
}