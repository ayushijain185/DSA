#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter size : ";
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];        
        }
        cout<<endl;
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";        
        }
        cout<<endl;

    }
    cout<<"transpose of array : ";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
          if(i==j){
           continue;
          }
          else{
            int temp = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
          }        
        }
        cout<<endl;

    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";        
        }
        cout<<endl;

    }

}