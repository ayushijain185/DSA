#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;class Node{
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
void leftboundary(Node* root){
   if(root==NULL) return;
   if(root->left==NULL && root->right==NULL) return;
   cout<<root->val<<" ";
   leftboundary(root->left);
   if(root->left==NULL) leftboundary(root->right);
}
void rightboundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    rightboundary(root->right);
    if(root->right==NULL) rightboundary(root->left);
    cout<<root->val<<" ";
}
void bottomboundary(Node* root){
    if(root==NULL) return;
    if(root->right==NULL && root->left==NULL) cout<<root->val<<" ";
    bottomboundary(root->left);
    bottomboundary(root->right);
}
void boundarytraverse(Node* root){
    leftboundary(root);
    bottomboundary(root);
    rightboundary(root->right);
}

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(8);
    Node* i = new Node(9);
    Node* j = new Node(10);
    Node* k = new Node(12);
    Node* l = new Node(13);
    Node* m = new Node(14);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    d->right=h;
    e->right=j;
    e->left=i;
    f->left=k;
    f->right=l;
    g->left=m;
   boundarytraverse(a);
}