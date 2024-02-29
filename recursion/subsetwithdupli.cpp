// leetcode 78

#include<iostream>
#include<vector>
using namespace std;
void subset(int arr[] , int idx ,int n, vector<int> v ,bool flag){
    if(n==idx) {
       for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
       }
       cout<<endl;
       return;
    }

    if(arr[idx+1]==arr[idx]){
        subset(arr , idx+1 , n , v,false);  
    }
    else{
         subset(arr , idx+1 , n ,v,true); 
    }
    if(flag==true){
            v.push_back(arr[idx]);
            subset(arr , idx+1 , n ,v,true);
       }
    
}
int main(){
    int arr[]={1,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    subset( arr , 0 ,n, v,true);
}