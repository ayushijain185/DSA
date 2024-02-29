#include<iostream>
using namespace std;
int main(){
    string s = "1234568946";
    int x = stoi(s);     //string to int
    x = x+1;

    string k = to_string(x);      //int to string
    cout<<k<<endl;

     string h = "676778778778889";
    long long y = stoll(h);     //string to long
    
    cout<<y;

}