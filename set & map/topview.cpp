#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<unordered_map>
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

void topview(Node* root){
    if(root==NULL) return;
    unordered_map<int,int> mp;
    queue< pair<Node*,int> > q;
    pair<Node*,int> p;
    p.first= root;
    p.second=0;
    q.push(p);
    while(!q.empty()){
        Node* front = (q.front()).first;
        int level = (q.front()).second;
        q.pop();
        if(mp.find(level)==mp.end()) mp[level]=front->val;

       if(front->left!=NULL){
            pair<Node*,int> k;
            k.first= root->left;
            k.second=level-1;
            q.push(k);
       }
        if(front->right!=NULL){
            pair<Node*,int> r;
            r.first= root->right;
            r.second=level+1;
            q.push(r);
        } 
    }
    int minl = 0;
    int maxl=0;
    for(auto x:mp){
        int level = x.first;
        minl = min(minl,level);
        maxl = max(maxl,level);

    }
    for(int i=minl;i<maxl;i++){
        cout<<mp[i]<<" ";
    }
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
   topview(a);
}