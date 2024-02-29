#include<iostream>
#include<algorithm>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left=NULL;
        this->right=NULL;
    }
    
};
void display(Node* root){
     if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int sum(Node* root){
    int sume=0;
    if(root==NULL) return 0;
    sume+=root->val + sum(root->left) + sum(root->right);
    return sume;
}
int size(Node* root){
    if(root==NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}
int maxi(Node* root){
    if(root==NULL) return 0;
    return max(root->val,max(maxi(root->left) , maxi(root->right)));
}
int level(Node* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
int main(){
   Node* a = new Node(1);
   Node* b = new Node(2);
   Node* c = new Node(3);
   Node* d = new Node(4);
   Node* e = new Node(5);
   Node* f = new Node(6);
   Node* g = new Node(7);
   a->left=b;
   a->right=c;
   b->left=d;
   b->right=e;
   c->left=f;
   c->right=g;
   display(a);
   cout<<endl;
   cout<<"sum : "<<sum(a)<<endl;
   cout<<"size : "<<size(a)<<endl;
   cout<<"max : "<<maxi(a)<<endl;
   cout<<"level : "<<level(a)<<endl;
   cout<<"height : "<<level(a)-1<<endl;
}