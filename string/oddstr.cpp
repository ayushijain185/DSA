#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter your string : ";
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(i%2!=0){
            s[i] = '#';
        }
    }
    // for(int i=0;i<s.size();i++){
    //     cout<<s[i];
    // }
    cout<<s;
}
