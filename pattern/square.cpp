#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter : ";
    cin>>n;
    cout<<"enter : ";
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if((i==1) or (j==1) or (i==m) or (j==n)){
                cout<<"*"<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
}