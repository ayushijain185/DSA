#include<iostream>
#include<vector>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
       int k=0;
       int j=0;
       int l=0;
       while(k<n){
           if(k%2==0){
               if(nums[k]>0)k+=2;
               else{
                   while(j%2!=0)j++;
                   swap(nums[j],nums[k]);  
                   j++;
                   k+=2;
               }
               
           }
           else{
               if(nums[k]<0)k+=2;
               else{
                   while(l%2==0)l++;
                   swap(nums[l],nums[k]);
                   l++;
                   k+=2;
               }
           }
           
       }
        return nums;
    }
int main(){
    vector<int>nums;
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(-5);
    nums.push_back(-2);
    nums.push_back(-4);
    rearrangeArray(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}