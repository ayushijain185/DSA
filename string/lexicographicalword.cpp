#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string s;
    string maxword="";
    string temp ="";
    cout<<"enter a string : ";
    getline(cin,s);
    stringstream ss(s);
    while(ss>>temp){
        maxword=max(temp,maxword);
    }
    cout<<maxword;


}