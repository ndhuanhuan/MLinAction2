/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
// LeetCode, Populating Next Right Pointers in Each Node II
class Solution {
public:
void connect(TreeLinkNode *root) {
while (root) {
TreeLinkNode * next = nullptr; // the first node of next level
TreeLinkNode * prev = nullptr; // previous node on the same level
for (; root; root = root->next) {
if (!next) next = root->left ? root->left : root->right;
if (root->left) {
if (prev) prev->next = root->left;
prev = root->left;
}
if (root->right) {
if (prev) prev->next = root->right;
prev = root->right;
}
}
root = next; // turn to next level
}
}