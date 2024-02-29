#include<iostream>
using namespace std;
string bin(int k){
    string s="";
    while(k>0){
        if(k%2==0)s='0'+s;
        else s='1'+s;
        k/=2;
    }
  return s;
}
int main(){
    int k ;
    cin>>k;
    cout<<bin(k);
}