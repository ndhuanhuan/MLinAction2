/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        while(root)
        {
            TreeLinkNode* next = NULL, prev=NULL;
            for(;root;root=root->next)
            {
                if(!next)
                    next = root->left?root->left:root->right;
                    if(root->left)
                    {
                        if(prev!=NULL) prev->next = root->left;
                        prev = root->left;
                    }
                    if(root->right)
                    {
                        if(prev!=NULL) prev->next = root->right;
                        prev = root->right;
                    }



            }

            root=next;

        }
    }
};