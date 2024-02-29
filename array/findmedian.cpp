#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        int i,j,k;
        i=nums1[0];
        j=nums2[0];
        k=nums[0];
        float result=0;
        int median = 0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                nums[k]=nums1[i];
                i++;
            }
            else{
                nums[k]=nums2[j];
                j++;
            }
        }
        if(nums2.size()>nums1.size()){
            while(nums2.size()==j){
                nums[k]=nums2[j];
                j++;
            }
        }
        if(nums2.size()<nums1.size()){
            while(nums1.size()==i){
                nums[k]=nums1[i];
                i++;
            }      
        }
        if(nums.size()%2==0){
            median = (nums.size()+1)/2;
            result=(nums[median]+nums[median+1])/2;
        }
        if(nums.size()%2!=0){
            result= (nums.size()+1)/2;

        }
        return result;
    }
};
int main(){
    vector<int>nums1;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(4);
    nums1.push_back(6);
    nums1.push_back(7);
    vector<int>nums2;
    nums2.push_back(3);
    nums2.push_back(5);
    nums2.push_back(7);
    nums2.push_back(9);
    nums2.push_back(10);
    Solution median;
    median.findMedianSortedArrays(nums1,nums2);
}
