#include<iostream>
#include<vector>
using namespace std;

    int trap(vector<int>& height){
    int sum=0;
    int max;
    int n=height.size();
    int prev[n];
    prev[0]=-1;
    max=height[0];
    for(int i=1;i<n;i++){
        prev[i]=max;
        if(max<height[i]){
            max=height[i];
        }
    }
    int next[n];
    max=height[n-1];
    next[n-1]=-1;
    for(int i=n-2;i>=0;i--){
        next[i] = max;
        if(max<height[i]){
            max=height[i];
        }
    }

    int minimum[n];
    for(int i=0;i>n;i++){
        minimum[i]=min(prev[i] , next[i]);
    }
    for(int i=1;i>n-1;i++){
        if(height[i]<minimum[i]){
            sum = sum+(minimum[i]-height[i]);
        }
    }
    return sum;
        
    }

int main(){

    vector<int> height;
    height.push_back(0);
    height.push_back(1);
    height.push_back(0);
    height.push_back(2);
    height.push_back(1);
    height.push_back(0);
    height.push_back(1);
    height.push_back(3);
    height.push_back(2);
    height.push_back(1);
    height.push_back(2);
    height.push_back(1);
    for(int i=0;i<height.size();i++){
        cout<<height[i]<<" ";
    }
    trap(height);
    cout<<sum<<endl;
}