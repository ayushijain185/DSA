#include<iostream>
using namespace std; 
int odd(int x,int y){
    int a,b;
    if(x>y){ b=x; a=y;}
    else{ a=x; b=y;}
    for(int i=a;i<=b;i++){
        int count=0;
        for(int j=2;j<i-1;j++){
           
            if(i%j==0){
            count++;
            }    
        }
        if(count==0) cout<<i<<endl;     
    }
}
int main(){
    int a=6,b=20;
    // cout<<"enter one : ";
    // cin>>a;
    // cout<<"enter two : ";
    // cin>>b;
    odd(a,b);
}