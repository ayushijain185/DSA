#include<iostream>
using namespace std;
int main(){
     int arr[]={1,7,45,6,78,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // swap code
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]) continue;
            else{
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        count++;
    }
     if(count<2) cout<<"almost sorted";
     else cout<<"count : "<<count;
}