#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int pivot=-1;
        int high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mid==0) low=mid+1;
            if(mid==nums.size()-1) high=mid-1;
            if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]){
                pivot=mid;
                break;
            }
            else if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                pivot=mid+1;
                break;
            }
            else if(nums[mid]>nums[high]) low=mid+1;
            else high=mid-1;
        } 
        if(pivot==-1){
            low=0;
            high=nums.size()-1;
            while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target)cout<<mid;
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
            }

        }
        if(target>=nums[0] && target<=nums[pivot-1]){
            low=0;
            high=pivot-1;  
            while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target) cout<<mid;
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
            } 
        }
        else{
            low=pivot;
            high=nums.size()-1;
            while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target) cout<<mid;
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
            }
        } 
        return -1;
    }
};

int main(){
   int target=1;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    Solution ob;
    ob.search(nums,target);
    
}