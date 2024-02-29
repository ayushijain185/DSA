#include<iostream>
using namespace std;
int go(int num){
    int temp=num;
    int tt;
    while(temp>0){
        tt=temp;
        temp=temp & temp-1;
    }
    tt=(tt<<1)-1;
    tt = num ^ tt;
    return tt;
}
int main(){
    int num=23;
    cout<<go(num);
}