#include<iostream>
using namespace std;
void zigzag(int n){
    if(n==0) return;
    cout<<n<<endl;
    zigzag(n-1);
     cout<<n<<endl;
    zigzag(n-1);
     cout<<n<<endl;
   
}
int main(){
    zigzag(2);
}