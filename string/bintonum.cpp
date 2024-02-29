#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "1001";
    int sum=0;
    int l=1;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='1'){
            sum+=(l*1);
            l*=2;
        }
        else{
            l*=2;
        }
    }
    cout<<sum;
}