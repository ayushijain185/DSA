#include<iostream>
using namespace std;
void disk(int n , char A , char  B , char C){
    if(n==0) return;
     disk(n-1 , A , C ,B);
     cout<<A<<"->"<<C<<endl;
    disk(n-1 , B , A , C);
}

int main(){
    disk(3,'A' ,'B' ,'C');
}