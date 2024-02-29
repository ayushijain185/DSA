#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<string> s;
    s.push_back("flower");
    s.push_back("flight");
    s.push_back("flow");
    if(s.size()==1) return s;
    sort(s.begin(),s.end());
    string first = s[0];
    string last = s[s.size()-1];
    string t= "";
    for(int i=0;i<min(first.size(),last.size());i++){
        if(first[i]==last[i]){
            t=t+first[i];
        }
        else return s;
    }
}