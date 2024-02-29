#include<iostream>
#include<vector>
using namespace std;
void ksequence(int k , int n, int start , vector<int> &temp , vector<vector<int>> &ans){
    if(k==0 || n==0) return;
    if(k==0 && n==0) {
        ans.push_back(temp);
        return;
    }
    if(start>9) return;
    if(n>=start && k>0){
        temp.push_back(start);
        ksequence(k-1,n-start,start+1,temp ,ans);
        temp.pop_back();
    } 
    ksequence(k,n,start+1,temp ,ans);
}
int main(){
    int k;
    cin>>k;
    int n;
    cin>>n;
    vector<int> temp;
    vector<vector<int>> ans;
    ksequence(k,n,0,temp, ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}