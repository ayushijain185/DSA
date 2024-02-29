#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter rows : ";
    cin>>n;
    cout<<"enter columns : ";
    cin>>m;
    int a[n][m];
    cout<<"first matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<"second matrix : "<<endl;
    int b[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
        cout<<endl;
    }
    cout<<"sum of both the array : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]+b[i][j]<<"  ";
        }
        cout<<endl;
    }
}