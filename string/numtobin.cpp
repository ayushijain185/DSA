#include<iostream>
using namespace std;

int main(){
    int n =9;
    string ans="";
    while(n>0){
        if(n%2==0)ans+='0';
        else{
            ans+='1';
        }
        n=n/2;
    }
    cout<<ans;
    
}