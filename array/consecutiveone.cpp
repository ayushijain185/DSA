#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void findMaxConsecutiveOnes(vector<int>& nums) {
        int mx=0;
        int i=0;
        while(i<nums.size()){
            if(nums[i]==1){
                int c=1;
                while(nums[i+1]==nums[i]){c++; i++;}
                mx= max(mx,c);
            }
            i++;
        }
        cout<<mx;
    }
};

int main(){
    Solution s;
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(1);
    s.findMaxConsecutiveOnes(nums);
}