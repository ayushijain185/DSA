#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s ,p;
    vector<int> cs(26,0);
    vector<int> cp(26,0);
    vector<int> ans;
    cout<<"enter a string s : ";
    cin>>s;
    cout<<"enter a string p : ";
    cin>>p;
    int t = s.size();
    int q = p.size();
    if(q>t) cout<<"no answer exit ";
    else{
        for(int i=0;i<q;i++){
            cp[p[i]-'a']++;
        }
        int i=0;
        for(i=0;i<q;i++){
            cs[s[i]-'a']++;
        }
        bool f = true;
        for(int i=0;i<26;i++){
            if(cs[i]!=cp[i]){
                f = false;
                break;
            }
        
        }
    
    
    if(f==true){
        ans.push_back(0);

    }
    while(i<t){
        cs[s[i-q]-'a']--;
        cp[p[i]-'a']++;
        bool f = true;
        for(int i=0;i<26;i++){
            if(cs[i]!=cp[i]){
                f = false;
                break;
            }
        
        }
        if(f==true){
        ans.push_back(i-q+1);
        } 
        i++;
    }
    cout<<"the indices : "<<endl;
    for(auto i:ans){
        cout<<i;
    }
    
    }
}