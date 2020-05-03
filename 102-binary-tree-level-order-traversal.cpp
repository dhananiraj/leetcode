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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==nullptr){
          return {};
        }
        vector<vector<int>> output;
        queue<TreeNode*> q;
        TreeNode* curr = nullptr;
        q.push(root);
        while(q.size()!=0){
          int s = q.size();
          vector<int> temp;
          while(s--){
            curr = q.front();
            q.pop();
            if(curr == nullptr){
              continue;
            }
            temp.emplace_back(curr->val);
            if(curr->left != nullptr){
              q.push(curr->left);
            }
            if(curr->right != nullptr){
              q.push(curr->right);
            }
          }
          output.emplace_back(temp);
        }
        return output;
    }
};
