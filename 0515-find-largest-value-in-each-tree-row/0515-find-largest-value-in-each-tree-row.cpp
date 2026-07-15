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
    void bfs(TreeNode* root,vector<int>& ans){
          queue<TreeNode*> q;
          if(root==NULL) return;
          q.push(root);
          while(q.size()!=0){
            int maxi = INT_MIN;
            int size = q.size();
            while(size--){
                TreeNode* curr = q.front();
                q.pop();
                maxi=max(curr->val,maxi);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            ans.push_back(maxi);
          }
    }
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        bfs(root,ans);
        return ans;
    }
};