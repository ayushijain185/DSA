#include<iostream>
using namespace std;
int recursivesum(int a , int b){
    int sum=0;
    if(a>b)return 0;
    if(a%2==0) return recursivesum(a+1,b);
    return a + recursivesum(a+2,b);
    
}
int main(){
    cout<<recursivesum(1,19);
}