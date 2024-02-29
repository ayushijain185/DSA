#include<iostream>
using namespace std;
int main(){
    int n=5;
    int low=0;
    int high=n;
    int mid;
    bool flag=false;
    while(low<=high){
        mid=low+(high-low)/2;
        int coin=mid*(mid+1)/2;
        if(coin==n){
            flag=true;
        }
        else if(coin<mid) low=mid+1;
        else high=mid-1;
    }
    if(flag) cout<<mid;
    else cout<<high;

}