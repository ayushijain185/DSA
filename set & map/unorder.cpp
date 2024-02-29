#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(2);
    s.insert(5);
    s.insert(1);
    s.insert(4);
    s.insert(5);
    s.insert(3);
    for(int i : s){
        cout<<i<<" ";
    }
   cout<<s.size()<<endl;
   s.erase(5);
   cout<<s.size()<<endl;
   for(int i : s){
        cout<<i<<" ";
    }
    if(s.find(4)!=s.end()) cout<<"exists";
    else cout<<"not exist";
}