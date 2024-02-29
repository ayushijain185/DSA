#include<iostream>
using namespace std;
int main(){
    int n,j;
    cout<<"enter : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" "<<" ";
        }
        cout<<i<<" ";
        
        for(j=1;j<2*i-1;j++){
            cout<<" "<<" ";
        }
        cout<<i<<" ";
        cout<<endl;
    }
}