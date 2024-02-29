#include<iostream>
using namespace std;
int fact(int a){
    int fact=1;
    for(int i=2;i<=a;i++){
        fact*=i;
        
    }
    return fact;
}
int combination(int x,int y){
    int ncr= fact(x)/(fact(y)*fact(x-y));
    return ncr;
}
int main(){
    int n,r;
    cout<<"enter : ";
    cin>>n;
    for(int i=0;i<=n-1;i++){
        for(int k=n;k>=i;k--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;

    }
    
}