#include<iostream>
using namespace std;
int main(){
    int A , B ,C;
    cout<<"enter the mark of A : ";
    cin>>A;
    cout<<"enter the mark of B : ";
    cin>>B;
    cout<<"enter the mark of c : ";
    cin>>C;
    if(A<B){
        if(A<C){
        cout<<"A is least";
        }
        else{
            cout<<"C is least";
        }
    }
    else if(B<A){
        if(B<C){
        cout<<"B is least";
        }
        else{
            cout<<"C is least";
        }
    }
    else if(C<B){
        if(C<A){
            cout<<"C is least";
        }
        else{
            cout<<"A is least"; 
        }
    }
    else{
        cout<<"invalid input";
    }



}