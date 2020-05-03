/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* node, vector<int>& output){
      if(node == nullptr){
        return;
      } else {
        output.insert(output.end(),1,node->val);
        dfs(node->left,output);
        dfs(node->right,output);
      }
    }

    vector<int> preorderTraversal(TreeNode* root) {
      vector<int> output;  
      dfs(root,output);
      return output;  
    }
};

