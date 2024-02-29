#include<bits/stdc++.h>
using namespace std;

 int setBits(int n) {
    int c=0;
    while(n>0){
        if(n&1)c++;
        n=n>>1;
    }
    cout<<c;
}
int main(){
    int n =8;
    setBits(n);
    return 0;
}