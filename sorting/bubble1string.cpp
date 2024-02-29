#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "AZYZXBDJKX";
    char ch = 'D';
    string str = "";
    cout<<"s : "<<s<<endl;
    for(int i =0;i<s.size();i++){
        if(s[i]>ch) str+=s[i];
    }
    cout<<"str : "<<str<<endl;
    for(int i=0;i<str.size()-1;i++){
        bool flag = true;
        for(int j=0;j<str.size()-1-i;j++){
            if(str[j]<str[j+1]) swap(str[j],str[j+1]);
            flag = false;
        }
        if(flag==true)break;
    }
    cout<<"str : "<<str;
}
