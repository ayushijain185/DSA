#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter a row 1st matrix : ";
    cin>>n;
    cout<<"enter a column 1st matrix : ";
    cin>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<a[i][j]<<" ";
            }
        }
        
        else{
            for(int j=m-1;j>=0;j--){
                cout<<a[i][j]<<" ";
            }

        }
        cout<<endl;
    }
}