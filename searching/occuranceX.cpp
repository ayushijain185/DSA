#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,4,4,4,6,7,8};
    int low=0;
    int high=10;
    int target=4;
    bool flag=false;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            while(arr[mid+1]==target) mid=mid+1;
            // last occurance
            cout<<"index : "<<mid<<endl;
            // first occurance
            while(arr[mid-1]==target) mid=mid-1;
            cout<<"index : "<<mid;
            flag=true;
            break;
        }
        else if(arr[mid]>target){
            high = mid - 1;
        }
        else{
            low=mid+1;
        
        }
    }
    if(flag==false){
        cout<<"Not Found";
    }
}