#include<iostream>
using namespace std;
int square(int x){
    return  x*x;
}
int main(){
    int n;
    cout<<"enter : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"square of "<<i<<" is "<<square(i)<<endl;
    }
}