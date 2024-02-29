#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,sum=0;
    cout<<"enter : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
        cout<<sum<<" ";
    }
}