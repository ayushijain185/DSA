#include<iostream>
using namespace std;
int main(){
    string s="ayushi jain";
    string res="";
    for(int i=0;i<s.size();i++){
        if(s[i]!='a') res+=s[i];
    }
    cout<<res;
}