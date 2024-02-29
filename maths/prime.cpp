#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n =4345;
    bool flag=0;
    if(n==1) cout<<"not a prime";
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            flag=1;
            cout<<"not a prime";
            break;
        }
    }
    if(flag==0) cout<<"prime";
}