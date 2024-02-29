#include<iostream>
using namespace std;
int go(int n){
    if(n>=0 && n<=9) return n;
    int digits = n%10;
    return digits + go(n/10);
}
int main(){
    int n= 126789;   
    cout<<go(n)<<endl;
}