#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;
int main(){
    string s,s1;
    cout<<"enter a string s1 : ";
    cin>>s;
    cout<<"enter a string s2 : ";
    cin>>s1;
    if(s1.size()!=s.size()) cout<<"not a anagram";
    
    else{
        string s= tolower(s);
        sort(s.begin(),s.end());
        sort(s1.begin(),s1.end());
        for(int i=0;i<s.size();i++){
            if(s[i]!=s1[i]) {
                cout<<"not a anagram";
                break;
                }
            else continue;
        }
        cout<<"anagram";
    }
}