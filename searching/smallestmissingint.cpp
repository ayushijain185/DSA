#include<iostream>
using namespace std;
int main(){
    int arr[9]={0,1,2,3,4,6,7,8,9};
    int low=0;
    int high=9;
    int ans=-1;
    bool flag=false;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==mid){
            low=mid+1;
        }
        else {
            ans=mid;
            high=mid-1;
        }
        
    }
    cout<<ans;
}