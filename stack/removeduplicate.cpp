#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;
void removeduplicate(string str){
    stack<char> s;
    s.push(str[0]);
    for(int i=1;i<str.length();i++){
        if(s.top()!=str[i]) s.push(str[i]);
        else continue;
    }
    string st="";
    while(s.top()!=0){
        st+=s.top();
        s.pop();

    }
    reverse(st.begin() , st.end());
   cout<<st;

}
int main(){
    string str = "aaabbbccg";
    cout<<str;
    removeduplicate(str);
    // cout<<str;
}
