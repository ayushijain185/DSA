#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums;
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(3);
    nums.push_back(7);
    nums.push_back(10);
    nums.push_back(6);
    int n = nums.size();
    int pro=1;
    for(int i=0;i<n;i++){
        pro*=nums[i];
    }
    cout<<pro<<endl;
    int c=0;
    while(pro>1){
        int i=2;
        if(pro%i==0)c++;
        while(pro%i==0)pro=pro/i;
        i++;
    }
    cout<<c;
}

