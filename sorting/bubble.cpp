#include<iostream>
using namespace std;
int main(){
    int arr[]={8,3,2,7,9,4,6,5,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=false;
            }
            
        }
        if(flag==true)break;
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
} int arr[]={5,0,1,2,0,4,0,3};