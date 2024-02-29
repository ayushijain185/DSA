#include<iostream>
using namespace std;
int main(){
    int n,i=1,j,ct=0,prime=0;
    
    cout<<"enter the no."<<endl;
    cin>>n;
    for(i=2;i=n;i++){
        for(j=2;(j*j)<=i;j++){
            if(i%j!=0){ 
                cout<<i<<" ";
                  
            }

         
        
           
        }
         
        
    }  
    
}
  