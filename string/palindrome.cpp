#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    bool flag =0;
    cout<<"enter a string : ";
    cin>>s;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i]!=s[n-i-1]){
            flag =1;
        }
    }
    if(flag==0) cout<<"palindrome";
    else cout<<"not a palindrome";
}