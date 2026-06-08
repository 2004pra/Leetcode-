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

    vector<TreeNode*> gt(int n){
           vector<TreeNode*> ans;
            if(n==1) {
                ans.push_back(new TreeNode(0));
                return ans;
            }
           
            for(int i=1;i<n-1;i+=2){
                int r = n -1 - i;
                vector<TreeNode*> leftst = gt(i);
                vector<TreeNode*> rightst = gt(r);
                int ls = leftst.size();
                int rs = rightst.size();
                for(int i=0;i<ls;i++){
                    for(int j = 0;j<rs;j++){
                        TreeNode* root = new TreeNode(0);
                        root->left = leftst[i];
                        root->right = rightst[j];
                        ans.push_back(root);
                    }
                }

            }
            return ans;
    }
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> res = gt(n);
        return res;
    }
};