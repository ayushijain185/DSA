#include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,7,9,8,74,4,2,3,89,56};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        int j=i;
        for(int j=i+1;j<n;j++){
            while(j>0 && arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                j--;
            }
       }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}
