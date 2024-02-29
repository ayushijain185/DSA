#include<iostream>
using namespace std;
int setbit(int num){
    return __builtin_popcount(num);
}
int main(){
     int num=200;
     cout<<setbit(num)<<endl;
     int count=0;
     int temp;
     while(num>0){
       temp=num;
        count++;
        num=num & num-1;
     }
     cout<<count<<endl;
     cout<<temp<<endl;
     cout<<temp*2;
}