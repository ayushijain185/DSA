#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>dp;
string s="";
int lcs(string &t1,string &t2,int i , int j){
    int c=0;
   if(i>=t1.size() || j>=t2.size()) return 0;
   if(dp[i][j]!=-1)return dp[i][j];
    if(t1[i]==t2[j]) {
        s+=t1[i];
        return dp[i][j] = 1 + lcs(t1,t2,i+1,j+1);     
    }else{
        return dp[i][j]= max(lcs(t1,t2,i+1,j) , lcs(t1,t2,i,j+1));
    }
}
int main(){
    string t1 = "abcde";
    string t2 = "ace";
    dp.clear();
    dp.resize(1005,vector<int> (1005,-1));
    cout<<lcs(t1,t2,0,0);
    // cout<<s;
}