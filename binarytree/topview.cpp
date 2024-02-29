#include<iostream>
#include<vector>
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
void horizontal(Node* root,int& minlevel , int& maxlevel,int level){
    if(root==NULL) return ;
    minlevel = min(minlevel,level);
    maxlevel = max(maxlevel,level);
    horizontal(root->left,minlevel,maxlevel,level-1);
    horizontal(root->right,minlevel,maxlevel,level+1);
}
void topview(Node* root,vector<int>&top,int level){
    if(root==NULL) return;
    if(top[level]==-1)top[level]=root->val;
    topview(root->left,top,level-1);
    topview(root->right,top,level+1);
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
    int minlevel=0;
    int maxlevel=0;
    horizontal(a,minlevel,maxlevel,0);
    vector<int> top((-minlevel+maxlevel+1),-1);
    topview(a,top,-minlevel);
    for(int i=0;i<top.size();i++)cout<<top[i]<<" ";

}