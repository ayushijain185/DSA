#include<iostream>
using namespace std;
string convert(int str){
    string sum = "";
    while(str>0){
        if((str%2)==0)
        sum = "0"+sum;
       else sum = "1"+sum;
        str=str>>1;  //str=str/2;
    }
    return sum;
}
int main(){
    int str=18;
    cout<<convert(str);
}