#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1) return 1;
    if(n==2) return 2;
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"Enter a no : ";
    cin>>n;
    cout<<fact(n);
}