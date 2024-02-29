#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr={{0,0,1,1},{0,0,0,1},{1,1,1,1},{0,1,1,1}};
     int n= arr.size();
        int m= arr[0].size();
        int count=-1 ;
        int finalans;
        for(int i=0;i<n;i++){
             int low=0 , high=m-1;
            while(low<=high){
                 int mid= low+(high-low)/2;
                if(arr[i][mid]==0){
                    low=mid+1; 
                }
                else{
                    high=mid-1;
                }
            }
            if(count<(m-low)){
               count=(m-low);
               finalans=i;
            }
        }
       cout<<finalans;
}