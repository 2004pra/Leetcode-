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
      
      
      void inorder(TreeNode* root, vector<TreeNode*>& v){
             if(!root) return;

             inorder(root->left,v);
             v.push_back(root);
             inorder(root->right,v);
             

     }
    TreeNode* searchBST(TreeNode* root, int val) {
           vector<TreeNode*> v;
           TreeNode* temp = NULL;
           inorder(root,v);
           for(auto it : v){
              if(it->val==val){
                temp=it;
                break;
              }
           }
           return temp;

    }
};