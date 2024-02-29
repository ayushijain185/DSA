#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int n;
        cin>>n;
        string s="";
        cin>>s;
        int i=0;
        int j=0;
        int ids=0,idl=0;
        bool f=true;
        while(i<n && f==true){
            if(s[i]=='B' && f==true){
                ids=i;
                j=i;
                f=false;
                while(j<n){
                    if(s[j]=='B')idl=j;
                    j++;
                }
            }
            i++;
        }
        if(f==true)cout<<0;
        else cout<<idl-ids+1<<endl;
    }
    return 0;
}
