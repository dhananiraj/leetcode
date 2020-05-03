/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root==nullptr){
          return {};
        }
        vector<vector<int>> output;
        queue<Node*> q;
        Node* curr = nullptr;
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
            if(curr->children.size() > 0){
              for(auto x: curr->children){
                q.push(x);
              }
            } 
          }
          output.emplace_back(temp);
        }
        return output;
    }
};
