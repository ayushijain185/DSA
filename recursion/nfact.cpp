#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1) return 1;
    if(n==2) return 2;
    return fact(n-1)*n;
}
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        cout<<"factorial of "<<i<<" = "<<fact(i)<<endl;
    }
    
}