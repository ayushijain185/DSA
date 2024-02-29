#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a no : ";
    cin>>n;
    int ori=n;
    int sum =0;
    while(n>0){
        int mod = n%10;
        sum += mod*mod*mod;
        n = n/10;
    }
    cout<<sum;
    if(sum==ori) cout<<"armstrong";
    else cout<<"not a armstrong";
}