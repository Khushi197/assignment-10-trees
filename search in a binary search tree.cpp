https://leetcode.com/problems/search-in-a-binary-search-tree/submissions/897011729/
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root->val==val)
        {
            return root;
        }
        TreeNode* tmp=root;

        while(tmp!=NULL)
        {
            if(tmp->val>val)
            {
                tmp=tmp->left;
            }
            else if(tmp->val<val)
            {
                tmp=tmp->right;
            }
            else
            {
                return tmp;
            }
            
        }
        TreeNode* nULL=NULL;
        return nULL;
        
    }
