#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,m;
    cout<<"enter no. of rows : ";
    cin>>n;
    cout<<"enter no. of column : ";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];        
        }
        cout<<endl;
    }
    int p,q;
    cout<<"enter no. of rows : ";
    cin>>p;
    cout<<"enter no. of column : ";
    cin>>q;
    int brr[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>brr[i][j];        
        }
        cout<<endl;
    }
    if(p==n && q==m){
         for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]+brr[i][j]<<" ";
        }
        cout<<endl;   
    }   

    }
    else{
        cout<<"we cant add different size of array";
    }
    
}