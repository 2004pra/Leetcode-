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
   vector<TreeNode*> help(int n,int start, int end){
    vector<TreeNode*> ans;
    if(start>end) {
        vector<TreeNode*> v;
        v.push_back(NULL);
        return v;
    }
    for(int i=start;i<=end;i++){
        vector<TreeNode*> leftbst = help(n,start,i-1);
        vector<TreeNode*> rightbst = help(n,i+1,end);
                for(auto left : leftbst){
                  for(auto right : rightbst){
                  TreeNode* root = new TreeNode(i);
                  root->left = left;
                  root->right = right;
                  ans.push_back(root);
             }
         }
    }
    return ans;
    

   }
    vector<TreeNode*> generateTrees(int n) {
        int start = 1;
        vector<TreeNode*> res =   help(n,start,n);
        return res;

    }
};