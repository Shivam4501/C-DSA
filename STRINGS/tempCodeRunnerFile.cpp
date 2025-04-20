#include<iostream>
using namespace std;

int main(){
char a[]="finding";
char s[26]={0};

for(int i=0;a[i]!='\0';i++){
    s[a[i]-97]++;
}
for(int i=0;i<26;i++){
    if(s[i]>=2){
        cout<<(char)(i+97)<< "  "<<s[i]<<endl;
    }
}
return 0;
}