#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0,n=s.length();
        bool flag=false;
        for(int i=0;i<s.length()-1;i++){
            for(int j=i+1;j<s.length();j++){
                if(s[i]==s[j]){
                   count=n-1;
                }
            }
        }
        cout<<count;   
    }
};
int main(){
    string s="abcabcbb";
    Solution obj;
    obj.lengthOfLongestSubstring(s);

}