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
    vector<vector<int>>  pathSum(TreeNode* root, int sum) {
         vector<vector<int>> result;
         vector<int> path;
         dfs(root,sum,path,result);
         return result;
    }
    
    void dfs(TreeNode* root, int gap, vector<int> &path, vector<vector<int> > &result)
    {
        if(root==nullptr) return;
        path.push_back(root->val);
        if (root->left == nullptr && root->right == nullptr) { // leaf
			if (gap == root->val)
				result.push_back(cur);
		}
		dfs(root->left,gap-root->val, result);
		dfs(root->right,gap-root->val, result);
		path.pop_back();
    }
};