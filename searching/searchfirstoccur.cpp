#include<iostream>
using namespace std;
int main(){
    int arr[19]={1,1,1,2,2,2,2,3,4,4,4,4,5,5,6,6,6,7,7};
    int high=19;
    int x=7;
    bool flag=false;
    int low=0;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                cout<<mid;
                flag =true;
                break;            
            }
            else{
                high = mid-1;
            }
             
        }
        else if(arr[mid]<x) low=mid+1;
        else high = mid-1;
    }
    if(flag==false) cout<<"Not Found";
}