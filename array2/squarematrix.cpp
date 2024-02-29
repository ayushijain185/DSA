#include<iostream>
using namespace std;
int main(){
    int n,m;
    int result=n/2+1;
    cout<<"enter the row : ";
    cin>>n;
    if(n%2!=0){
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        cout<<endl;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==result || j==result){
                    cout<<arr[i][j]<<" ";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }

    }
    else{
        cout<<"invalid input";
    }
   
}