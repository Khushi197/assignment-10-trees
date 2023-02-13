https://leetcode.com/problems/binary-tree-level-order-traversal/submissions/897012766/
class Solution {
public:
    vector<vector<int>> ans;
    void trav(TreeNode* rrot,int c){
        if(rrot==nullptr)
        return;
        if(ans.size() == c)
        ans.push_back(vector<int>());
        ans[c].push_back(rrot->val);
        c++;
        trav(rrot->left,c);
        trav(rrot->right,c);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        trav(root,0);
        return ans;
    }
};
