#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool ischeck(string s){
  string t=s;
  reverse(t.begin(),t.end());
  for(int i=0;i<s.size();i++){
    if(s[i]!=t[i])return false;
  }
  return true;
}
int main(){
  string s;
  cin>>s;
  int mx=1;
  int n = s.size();
  for(int i=0;i<n;i++){
    for(int j=0;j<=n;j++){
        string st=s.substr(i,j);
        if(ischeck(st)==true)mx=max(mx,(int)st.size());
    }
  }
  cout<<mx;
  return 0;
}
