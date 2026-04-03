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

  void inorder(TreeNode* root,unordered_map<int,int>& mp){
       if(root==NULL){
        return;
       }
       
       inorder(root->left,mp);
       mp[root->val]++;
       inorder(root->right,mp);
      

  }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> mp;
        inorder(root,mp);
        int maxi = INT_MIN;
        for(auto it : mp){
            maxi=max(maxi,it.second);
        }
        vector<int> v;
        for(auto it : mp){
            if(it.second==maxi){
                v.push_back(it.first);
            }
        }
        return v;



    }
};