/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        
    }
    void inorderTrav(TreeNode *root,vector<int> &result)
    {
        if(!root) return;
        inorderTrav(root->left,result);
        result.push_back(root->val);
        inorderTrav(root->right,result);
    }
};