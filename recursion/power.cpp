#include<iostream>
using namespace std;
int pow(int n , int m){
    // if(n==0) return ;
    if(n==1 || m==0) return 1;
    return n*pow(n,m-1);
    
}
int main(){
    cout<<pow(5,2);
}