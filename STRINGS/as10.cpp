#include<iostream>
using namespace std;
void perm(char s[],int k,char res[],int a[]){
   
    int i;
    if(s[k]=='\0'){
        res[k]='\0';
        cout<<res<<endl;
    }
    else{
        for(i=0;s[i]!='\0';i++){
            if(a[i]==0){
                res[k]=s[i];
                a[i]=1;
                perm(s,k+1,res,a);
                a[i]=0;
            }
        }
    }
}
int main(){
    char s[]="SHI";
      int a[10]={0};
     char res[10];
    perm(s,0,res,a);
return 0;
}