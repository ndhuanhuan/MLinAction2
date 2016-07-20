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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        dfs(root,1,result);
        return result;
    }
    void dfs(TreeNode* root, int level, vector<vector<int>> &result)
    {
        if(!root) return;
        if(level>result.size())
            result.push_back(vector<int>());
        result[level-1].push_back(root->val);
        dfs(root->left,level+1,result);
        dfs(root->right,level+1,result);
        
    }
};