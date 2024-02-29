#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int m) {
        int n=customers.size();
        int mx = 0;
        for(int i=0;i<m;i++){
           if(grumpy[i]==1){
               mx +=customers[i];
           }
        }                                             
        int mxm = mx;
        int idx=0;
        for(int i=m;i<n;i++){
            if(grumpy[i-m]==1) mx-=customers[i-m];
            if(grumpy[i]==1)mx+=customers[i];
            if(mx>=mxm){
                mxm=mx;
                idx=i-m+1;
            }
        }
        for(int i=idx;i<idx+m;i++){
            grumpy[i]=0;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0)sum+=customers[i];
        }
        return sum;
    }
};

int main(){
    Solution s;
    int m=3;
    vector<int> customers;
    vector<int> grumpy;
    customers.push_back(1);
    customers.push_back(0);
    customers.push_back(1);
    customers.push_back(2);
    customers.push_back(1);
    customers.push_back(1);
    customers.push_back(7);
    customers.push_back(5);
    grumpy.push_back(0);
    grumpy.push_back(1);
    grumpy.push_back(0);
    grumpy.push_back(1);
    grumpy.push_back(0);
    grumpy.push_back(1);
    grumpy.push_back(0);
    grumpy.push_back(1);
    cout<<s.maxSatisfied(customers , grumpy , m);
}

