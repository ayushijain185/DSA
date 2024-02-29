#include<iostream>
using namespace std;
int hcf(int a , int b){
    if(a==0) return b;
    else return hcf(b%a , a);
}
int main(){
    cout<<hcf(77,84);
}