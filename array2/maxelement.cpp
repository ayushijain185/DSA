#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,m;
    int max=INT_MIN;
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
            if(max<arr[i][j]){
                max=arr[i][j];
            }
                    
        }
        
    }
    cout<<max;
    

}