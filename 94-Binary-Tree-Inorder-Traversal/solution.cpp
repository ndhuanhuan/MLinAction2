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
        TreeNode *cur = root;
        stack<TreeNode*> s;
        while(cur||!s.empty())
        {
            if(!cur)
            {
                cur = s.top();
                s.pop();
                result.push_back(cur->val);
                cur=cur->right;
            }
            else
            {
                s.push(cur);
                cur = cur->left;
            }
        }
        return result;

    }

};