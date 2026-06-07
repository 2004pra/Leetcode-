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

        
         
    TreeNode* createBinaryTree(vector<vector<int>>& d) {
           unordered_map<int,TreeNode*> mp;
           unordered_set<int> childrens;
           for(auto &a:d){
               int pv = a[0];
               int cv = a[1];
               int left = a[2];

               if(mp.find(pv)==mp.end()){
                mp[pv] = new TreeNode(pv);
               }
               if(mp.find(cv)==mp.end()){
                mp[cv] = new TreeNode(cv);
               }
               if(left){
                mp[pv]->left=mp[cv];
               }
               else{
                mp[pv]->right=mp[cv];
               }
               childrens.insert(cv);
           }
           for(auto &[val,node]:mp){
            if(childrens.find(val)==childrens.end()){
                return node;
            }
           }
           return NULL;

    }
};