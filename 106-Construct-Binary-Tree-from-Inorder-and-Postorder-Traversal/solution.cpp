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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()!=postorder.size()) return NULL:
        int n = indorder.size();
        return bfs(inorder, postorder,0, n-1, 0, n-1);
    }
    
    TreeNode *bfs(vector<int> &inorder, vector<int> &postorder, int s1, int e1, int s2, int e2)
    {
        if(s1>e1||s2>e2) return NULL;
        TreeNode *root = new TreeNode(postorder[e2]);
        int rootIndex = -1;
        for (int i = s1; i <= e1; i++) {
			if (inorder[i] == root->val) {
				rootIndex = i;
				break;
			}
		}
		
		if(rootIndex==-1) return NULL;
		int leftTreeSize = rootIndex-1;
		int rightTreeSize = e1- rootIndex;
		root->left = bfs(inorder, postorder, s1, rootIndex - 1, s2, s2 + leftTreeSize - 1);
		root->right = bfs(inorder, postorder, rootIndex + 1, e1, e2 - rightTreeSize, e2 - 1);
		return root;
    }
};