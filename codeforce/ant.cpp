#include<bits/stdc++.h>
using namespace std;

int main(){
    int n =3;
    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int sum=0;
    int c=0;
     for(int i=0;i<nums.size();i++){
            if(nums[i]>0)sum+=nums[i];
             if(nums[i]<0)sum-=nums[i];
            if(sum==0)c++;
        }
        cout<<sum;
    cout<<c;
}