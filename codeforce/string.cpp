#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    string s="abc";
    vector<string>st(n-1);
    for(int i=0;i<n-1;i++){
       cin>>st[i];
    }

    vector<char>ans;
    map<char,int>mp;
    for(int j=0;j<str[0].size();j++){
        for(int i=0;i<str.size();i++){
            mp[str[i][j]]++;
        }

        for(int i=0;i<st.size();i++){
            mp[st[i][j]]--;
            if(mp[st[i][j]]==0)mp.erase(st[i][j]);
        }
        auto k=mp.begin()->first;
        ans.push_back(k);
        mp.clear();
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}