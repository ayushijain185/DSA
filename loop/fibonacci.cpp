#include<iostream>
using namespace std;
int fib(int n){
    int a=0,b=1,sum=0;
     cout<<b<<" ";
    for(int i=1;i<n;i++){
        sum = a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
}
int main(){
    int n;
    cin>>n;
    fib(n);
}