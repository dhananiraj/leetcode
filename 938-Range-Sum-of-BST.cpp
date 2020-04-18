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
    int sum = 0, l, r;
  
    void dfs(TreeNode *c) {
        if(c == NULL) return;
        
        if(c->val >= l && c->val <= r)
            sum += c->val;
        
        if(c->val >= l)
            dfs(c->left);
        if(c->val <=r)
            dfs(c->right);
    }
  
    int rangeSumBST(TreeNode* root, int L, int R) {
        l = L;
        r = R;
        dfs(root);
        root->left = root->right = nullptr;
        return sum;
    }
};