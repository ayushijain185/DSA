#include<iostream>
using namespace std;
class stack{
public:
    int arr[5];
    int idx=-1;
    void push(int val){
        if(idx==4){
            cout<<"stack is full"<<endl;
            return;
        }
        idx++;
        arr[idx]=val;
    }
    void pop(){
        if(idx==-1){
            cout<<"stack is underflow"<<endl;
            return;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"stack is underflow"<<endl;
            return -1;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
 };
 int main(){
    stack s;
    s.pop();
    cout<<s.top();
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    s.push(11);
    // s.push(12);
    cout<<"size : "<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
 }