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
	vector<vector<int> > pathSum(TreeNode *root, int sum) {
		vector<vector<int> > result;
		vector<int> cur; // í¯€í½œí¯’í¼£í¯í°‚í¯‡í³‹
		pathSum(root, sum, cur, result);
		return result;
	}
private:
	void pathSum(TreeNode *root, int gap, vector<int> &cur,
		vector<vector<int> > &result) {
		if (root == nullptr) return;
		cur.push_back(root->val);
		if (root->left == nullptr && root->right == nullptr) { // leaf
			if (gap == root->val)
				result.push_back(cur);
		}
		pathSum(root->left, gap - root->val, cur, result);
		pathSum(root->right, gap - root->val, cur, result);
		cur.pop_back();
	}
};