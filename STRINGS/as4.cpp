#include<iostream>
using namespace std;

int main(){
char a[]="how are  you ";
int i,word=1;
for(int i=0;a[i]!='\0';i++){
    if(a[i]==' ' && a[i-1]!=' '&& a[i+1]!='\0')
    word++;
}
cout<<word;
return 0;
}