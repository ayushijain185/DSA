#include<iostream>
using namespace std;
int coun(int x){
    int count=0;
    while(x>0){
        x=x/10;
        count++;
    }
    return count;
}
int square(int x){
    x=x*x;
    return x;
}

int main(){
    int n;
    cout<<"enter the no : ";
    cin>>n;
    cout<<coun(n)<<endl;
    cout<<square(n);
}