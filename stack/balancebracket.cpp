#include<iostream>
#include<stack>
using namespace std;
bool check(string str){
    if(str.length()%2!=0) return false;
    stack<char>s;
    for(int i=0;i<str.length();i++){
        if(str[i]=='('){
            s.push('(');
        }
        else{
            if(str[i]==')' && s.size()<0){
                return false;
            }
            else{
                s.pop();
            }
        }
    }
    if(s.size()==0) return true;
    else return false;
}
int main(){
    string str = "(())())";
    cout<<check(str);

}