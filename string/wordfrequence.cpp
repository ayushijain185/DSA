#include<iostream>
#include<vector>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int count =0, maxcount =0;
    vector<string> v;
    string s;
    getline(cin , s);
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    
    for(int j=0;j<v.size();j++){
        if(v[j]==v[j-1]){
            count++;
        }
        else count =1;
        maxcount = max(maxcount , count);
    }

    int c=0;
    for(int j=0;j<v.size();j++){
        if(v[j]==v[j-1]){
            c++;
        }
        else c =1;
        if(c==maxcount){
            cout<<v[j]<<" "<<maxcount;
            cout<<endl;
        }
    }
}