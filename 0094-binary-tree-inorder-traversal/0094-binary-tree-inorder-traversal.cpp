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
 void inorderTraversalHelper(TreeNode* root, vector<int>& result) {
    if (root == nullptr) {
        return;
    }
    // Traverse the left subtree
    inorderTraversalHelper(root->left, result);
    // Visit the root node
    result.push_back(root->val);
    // Traverse the right subtree
    inorderTraversalHelper(root->right, result);
}
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
         vector<int> result;
    inorderTraversalHelper(root, result);
    return result;
    }
};