/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<int>ans;
        while(!q.empty())
        {
            int sz=q.size();
            TreeNode* last;
            while(sz--){
                TreeNode* t=q.front();
                q.pop();
                last=t;
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            ans.push_back(last->val);
        }
        return ans;
    }
};