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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) return ans;
        
        
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()>0){
            int n = q.size();
            int lastVal= 0;
            for(int i =0;i<n;i++){
            TreeNode* curr = q.front();
            q.pop();
            lastVal=curr->val;
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
            }
            ans.push_back(lastVal);
        }
        return ans;
    }
};