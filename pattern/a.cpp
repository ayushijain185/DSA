#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter : ";
    cin>>n;
    int s=1;
    for(int i=0;i<2*n-1;i++){
        cout<<char(s+64)<<" ";
        s++;
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        int a=1;
        for(int j=1;j<=n-i;j++){
            cout<<char(a+64)<<" ";
            a++;
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<" "<<" ";
            a++;
        }
        for(int k=1;k<=n-i;k++){
            cout<<char(a+64)<<" ";
            a++;
        }
        cout<<endl;

    }
}