#include<iostream>
using namespace std;
int main(){
    string s;
    int j=0;
    int sum =0;
    cout<<"enter a string : ";
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            j++;
        }
        else{
            sum = sum+(j*j+1)/2;
            j=0;
        }
    }
    sum = sum+(j*j+1)/2;
    cout<<sum;
}