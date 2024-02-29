class Solution {
public:
    void traverse(TreeNode* root, vector<vector<int>>& ans,int &level){
        if(root==NULL)return;
        queue<pair<TreeNode*,int>>q;
        q.push({root,level});
        while(q.size()>0){
            TreeNode* temp=q.first.front();
            q.pop();
            ans[level].push_back(temp->val);
            if(root->left!=NULL)q.push({root->left,level+1});
            if(root->right!=NULL)q.push({root->right,level+1});
        }
        return;
    }
    vector<vector<int>> levelOrder(TreeNode* root){
        vector<vector<int>>ans;
        traverse(root,ans,0);
        return ans;
    }
};
