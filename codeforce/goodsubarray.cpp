#include<bits/stdc++.h>
using namespace std;
long long maximumSubarraySum(vector<int>& nums, int k) {
        int i=1;
        int j=0;
        int n = nums.size();
        long long sum=nums[0];
        long long mxsum=INT_MIN;
        while(j<n-1){
            if(i==n){
                j++;
                i=j+1;
                sum=nums[j];
            }
            sum+=nums[i];
            if(abs(nums[j]-nums[i])==k){
                mxsum=max(mxsum,sum);
                i++;
            }
            else {
                i++;
            }
            
        }

      return mxsum;
    }
    
int main(){
    int k;
    cin>>k;
    vector<int>nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<maximumSubarraySum(nums,k);
    return 0;
}
    
