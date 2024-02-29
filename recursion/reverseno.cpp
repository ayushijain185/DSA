#include<iostream>
using namespace std;
int reverse(int n, int &ans){
    if(n<=0) return ans;
    int digit=n%10;
    ans=ans*10+digit;
    reverse(n/10,ans);
}
int main(){
    int n=1234;
    int ans=0;
    cout<<reverse(n, ans);

}