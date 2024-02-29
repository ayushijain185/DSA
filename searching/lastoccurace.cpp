#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,3,4,5,5,5,5,6,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0 , high=n-1;
    int target=5;
    int targetidx=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            targetidx=mid;
            break;
        }
        if(arr[mid]>target) high=mid-1;
        else low=mid+1;
    }
    if(targetidx==-1) cout<<"element not exist";
    else{
        if(arr[targetidx]==target){
            targetidx++;
        }
    }
   
    cout<<targetidx-1;
    cout<<"count : "<<count;
}