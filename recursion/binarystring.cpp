#include<iostream>
using namespace std;
void genrate(string s  , int n){
    if(n==0){
        cout<<s<<endl;
        return;
    }
    genrate(s+'0' , n-1);
    if(s=="" || s[s.length()-1]=='0')  genrate(s+'1' , n-1); //for not consecutive one
}
int main(){
    int n=4;
    genrate("" , n);
}