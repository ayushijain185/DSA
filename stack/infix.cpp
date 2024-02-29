#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch =='+' || ch == '-') return 1;
    else return 2;
}
int express(int val1 , char ch , int val2){
    if(ch == '+') return val1+val2;
    else if(ch == '-') return val1-val2;
    else if(ch == '*') return val1*val2;
    else return val1/val2;
}
int main(){
    string s = "(2+6)*7/8-5";
    int n = s.length();
    cout<<s;
    stack<int> val;
    stack<char> op;
    for(int i=0;i<n;i++){
        if(s[i]>=48 && s[i]<=57) val.push(s[i]-48);
        else{
            if(op.size()==0)op.push(s[i]);
            else if(s[i]=='(')op.push(s[i]);
            else if(op.top()=='(')op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    char ch = op.top();
                        op.pop();
                        int val2 = val.top();
                        val.pop();
                        int val1 = val.top();
                        val.pop();
                        int ans = express(val1 , ch , val2);
                        val.push(ans);
                }
                op.pop();
            }
            else if(priority(op.top())<priority(s[i])) op.push(s[i]);
            else{
                while(op.size()>0 || priority(op.top())>=priority(s[i])){
                        char ch = op.top();
                        op.pop();
                        int val2 = val.top();
                        val.pop();
                        int val1 = val.top();
                        val.pop();
                        int ans = express(val1 , ch , val2);
                        val.push(ans);
                    }  
                op.push(s[i]);
            }
        }
     }
    while(op.size()>0){
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = express(val1 , ch , val2);
        val.push(ans);
     }
    cout<<val.top();
}