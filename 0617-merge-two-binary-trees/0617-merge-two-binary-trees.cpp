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
    TreeNode* help(TreeNode* root1, TreeNode* root2){
        if(!root1) return root2;
        if(!root2) return root1;
        queue<pair<TreeNode*, TreeNode*>> q;
        q.push({root1,root2});
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode* curr1 = q.front().first;
                TreeNode* curr2 = q.front().second;
                q.pop();
                curr1->val+=curr2->val;
                if(curr1->left && curr2->left) {
                    q.push({curr1->left,curr2->left});
                }
                else if(!curr1->left && curr2->left){
                    curr1->left=curr2->left;
                } 
                if(curr1->right && curr2->right){
                    q.push({curr1->right,curr2->right});
                }
                else if(!curr1->right && curr2->right){
                    curr1->right=curr2->right;
                }
            }
        }
        return root1;

    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* ans = help(root1,root2);
        return ans;
    }
};