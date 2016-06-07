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
            for(;n;n=n->next)
            {
                if(!next)
                    next = n->left?n->left:n->right;
                    if(n->left)
                    {
                        if(prev) prev->next = n->left;
                        prev = n->left;
                    }
                    if(n->right)
                    {
                        if(prev) prev->next = n->right;
                        prev = n->right;
                    }



            }

            n=next;

        }
    }
};