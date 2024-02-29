#include<iostream>
using namespace std;
int main(){
    int arr[]={0,0,0,0,0,0,0,1,1,1,1,1,1,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    int low=0 , high=n-1 , targetidx=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==1){
            targetidx=mid;
             high=mid-1;
        }
        else low=mid+1;
        
    }
   
    cout<<n-targetidx;
}