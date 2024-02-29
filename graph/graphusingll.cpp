#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node(int data){
            this->data=data;
        }
};
class Edge{
    public:
        int src;
        int des;
        int w;
        bool dir;
};
class graph{
    public:
        vector<Edge>e;
        vector<Node>v;
};
int main(){

}