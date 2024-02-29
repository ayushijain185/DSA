#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int low=1;
    bool flag = false;
    int high=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(mid*mid==n){
           flag =true;
        }
        else{
            if(mid*mid<n){
                low=mid+1;
            }
            else high=mid-1;
        }
    }
    if(flag) cout<<"perfect square";
    else cout<<"not a perefct square";
}