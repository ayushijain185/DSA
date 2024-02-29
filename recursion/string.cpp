#include<iostream>
using namespace std;
void removechar(string ans , string s){
    if(s.length()==0) {
        cout<<ans;
        return;
    }

    char ch=s[0];
    if(ch=='a' ) removechar(ans , s.substr(1));
    else removechar(ans+ch , s.substr(1));
}

void removechar2(string ans , string s, int idx){
    if(s.length()==idx) {
        cout<<ans;
        return;
    }

    char ch=s[idx];
    if(ch=='a' ) removechar2(ans , s,idx+1);
    else removechar2(ans+ch , s,idx+1);
}
int main(){
    string s="ayushi jain";
    // for(int i=0;i<s.size();i++){
    //     if(s[i]=='a') continue;
    //     else cout<<s[i];
    // }

    removechar("" , s );
    cout<<endl;
    removechar2("",s,0);
}