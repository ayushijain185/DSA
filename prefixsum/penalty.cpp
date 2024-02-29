#include<iostream>
#include<vector>
#include<climits>
#include<string>
using namespace std;

class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        vector<int> pre(customers.size()+1,0);
        vector<int> suf(customers.size()+1,0);
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+((customers[i]=='N')?1:0);
        }
        for(int i=n-1;i>=0;i--){
            suf[i]=suf[i+1]+((customers[i]=='Y')?1:0);
        }
        int mn=INT_MAX;
        for(int i=0;i<=n;i++){
            pre[i]=pre[i]+suf[i];
             mn=min(mn,pre[i]);
        }
        for(int i=0;i<=n;i++){
            if(pre[i]==mn) return i;
        }
        return n;
    }
};
int main(){
    string s = "YYNY";
    Solution st;
    cout<<st.bestClosingTime(s);
}