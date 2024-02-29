#include<iostream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int ind=0, index=0;
    vector<string> s;
    s.push_back("100123");
    s.push_back("100993");
    s.push_back("100193");
    s.push_back("00123");
    int max = stoi(s[0]);
    for(int i=0;i<s.size();i++){
        int x = stoi(s[i]);
        ind++;
        if(x>max){
            max = x;
            index = ind;
            
        }
    }
    cout<<max<<" at index "<<index;
}