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
   bool isMirror(TreeNode* t1, TreeNode* t2) {
        if (!t1 && !t2) return true; // Both nodes are null
        if (!t1 || !t2) return false; // One of the nodes is null
        return (t1->val == t2->val) && 
               isMirror(t1->left, t2->right) && 
               isMirror(t1->right, t2->left);
    }
    
    bool isSymmetric(TreeNode* root) {
         if (!root) return true; // Empty tree is symmetric
        return isMirror(root->left, root->right);
    }
};