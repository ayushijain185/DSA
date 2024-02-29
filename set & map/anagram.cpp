class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string , vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            string str = strs[i];
            sort(str.begin(),str.end());
            if(mp.find(str)==mp.end()){
                vector<string> v;
                v.push_back(strs[i]);
                mp[str]=v;
            }
            else mp[str].push_back(strs[i]);
        }
        for(auto x:mp){
            vector<string> v=x.second;
            ans.push_back(v);
        }
        return ans;
    }
};