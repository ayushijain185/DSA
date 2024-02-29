#include<iostream>
#include<vector>
using namespace std;
void subarray(int arr[], vector<int> v , int n, int idx){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
           
        }
     cout<<endl;   
      return;
    }
    
    subarray(arr,v,n,idx+1);
    if(v.size()==0 || arr[idx-1]==v[v.size()-1]){
        v.push_back(arr[idx]);
        subarray(arr,v,n,idx+1);
    }  
}
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    subarray(arr,v,n,0);
}