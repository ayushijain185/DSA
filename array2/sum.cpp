#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,m;
    int sum=0;
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
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=sum+arr[i][j];
                    
        }
        
    }
    cout<<sum;
    

}