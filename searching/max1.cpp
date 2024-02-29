#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int result=INT_MAX;
    vector<vector<int>> v={{0,1,1,1},{0,0,0,1},{0,0,1,1},{1,1,1,1}};
    int low=0;
    int high;
    int ans;
    int count=0;
    high=v[0].size();
    while(low<=high){
        int mid=low*(high-low)/2;
        for(int i=0;i<v[0].size();i++){
            if(v[mid]==1){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;  
        }
         if(ans<result){
            result=ans;
            count++;
         }
        

        
    }

}