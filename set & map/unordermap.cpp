#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> mp;
    pair<string ,int> p1;
    p1.first="ayushi";
    p1.second=400;
    mp.insert(p1);
    pair<string ,int> p2;
    p2.first="manvi";
    p2.second=200;
    mp.insert(p2);
    pair<string ,int> p3;
    p3.first="ayu";
    p3.second=300;
    mp.insert(p3);
    pair<string ,int> p4;
    p4.first="anay";
    p4.second=600;
    mp.insert(p4);
   for(auto ele:mp){
    cout<<ele.first<<" "<<ele.second<<endl;
   }
   
}