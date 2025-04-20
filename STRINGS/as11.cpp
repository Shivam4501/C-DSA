#include<iostream>
using namespace std;

char t;
void swap(char& o,char& u){
  t=o;
  o=u;
  u=t;
}
void perm(char s[],int l,int h){
    if(l==h){
        cout<<s<<endl;
    }
    else{
        for(int i=l;i<=h;i++){
            swap(s[l],s[i]);
            perm(s,l+1,h);
            swap(s[l],s[i]);
        }
    }
}
int main(){
    char s[]="abs";
    perm(s,0,2);
    
return 0;
}