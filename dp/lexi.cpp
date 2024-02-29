#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin>>t;
    vector<char>v(26);
    for(int i=0;i<26;i++){
        v[i]='a'+i;
    }
    for(int i=0;i<t;i++){
        int n ;
        cin>>n;
        string s="";
        if(n<=26){
            s+=v[0];
            s+=v[0];
            s+=v[n-3];
            cout<<s<<endl;
        }
        else{
            int m = n%26;
            if(m==0 && n==2*26){
                s+=v[0];
                s+=v[24];
                s+=v[25];
            }
            else if(m!=0 && n-m==26+26){
                s+=v[m-1];
                s+=v[25];
                s+=v[25];
            }
            else if(m==0 && n-m==26+26+26){
                s+=v[25];
                s+=v[25];
                s+=v[25];
            }
            else if(m!=0 && n-m==26){
                s+=v[0];
                s+=v[m-2];
                s+=v[25];
            }
            cout<<s<<endl;
        }
       
    }
    return 0;
}