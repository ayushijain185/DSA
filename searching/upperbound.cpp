#include<iostream>
using namespace std;
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    bool flag=false;
    int low=0;
    int high=9;
    int target=6;
    
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            cout<<arr[mid+1];
            flag=true;
            break;
        }
        else if(arr[mid]<target) low=mid+1;
        else high=mid-1;
    }
    if(flag==false){
        cout<<arr[low];
    }
}