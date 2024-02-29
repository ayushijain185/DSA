#include<iostream>
using namespace std;
void permutation(string ans , string s){
    if(s==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        string left=s.substr(0,i);
        string right=s.substr(i+1);
        permutation(ans+ch , left+right);
    }
}

int main(){
  
    string s="abcd";
    permutation("",s);
}