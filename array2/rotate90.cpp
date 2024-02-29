#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter a row : ";
    cin>>n;
    cout<<"enter a column : ";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=m-1;j>=0;j--){
        for(int i=0;i<n;i++){
            // 
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}