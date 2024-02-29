#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    reverse(str.begin(),str.end());
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    reverse(str.begin()+3,str.begin()+7);
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    sort(str.begin(),str.end());
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }
}