#include<iostream>
#include<vector>
using namespace std;
class stack{
public:
   vector<int> arr;
    void push(int val){
        arr.push_back(val);
    }
    void pop(){
        if(arr.size()==0){
            cout<<"stack is underflow"<<endl;
            return;
        }
        arr.pop_back();
    }
    int top(){
        
        return arr[arr.size()-1];
    }
    int size(){
        return arr.size();
    }
 };
 int main(){
    stack s;
    // s.pop();
    // cout<<s.top();
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