#include<iostream>
using namespace std;
int convert(string &bin){
    int n=bin.length();
    int sum=0;
    for(int i=0;i<n;i++){
        char ch=bin[i];
        int chr = ch-'0';
        sum = sum+(chr*(1<<(n-i-1)));     //2**(n-i-1)
    }
    return sum;
}
int main(){
    string bin ="0101";
    cout<<convert(bin);
}