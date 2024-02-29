// leetcode 78

#include<iostream>
#include<vector>
using namespace std;
void subset(int arr[] , int idx ,int n, vector<int> v , int k){
    if(n==idx) {
        if(v.size()==k){
            for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    } 
    cout<<endl;
    return;
    }
    if(v.size()+(n-idx)<k) return;
    subset(arr , idx+1 , n , v ,k);
    v.push_back(arr[idx]);
    subset(arr , idx+1 , n ,v,k);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    subset( arr , 0 ,n, v,3);
}