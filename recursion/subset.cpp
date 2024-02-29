#include<iostream>
#include<vector>
using namespace std;
void subst(string ans , string s,int idx , vector<string>& v){
    if(s.length()==idx) {
        v.push_back(ans);
        return;
    }
    char ch=s[idx];
    subst(ans ,s,idx+1,v);
    subst(ans+ch , s,idx+1,v);
    
}
int main(){
    string s="abc";
    vector<string> v;
    subst("",s,0,v);
    for(string ele:v){
        cout<<ele<<" ";
    }
}