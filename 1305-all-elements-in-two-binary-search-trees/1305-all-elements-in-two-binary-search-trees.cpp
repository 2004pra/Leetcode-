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
void inorder1(vector<int>& ans,TreeNode* root1){
    if(root1==NULL) return;
    inorder1(ans,root1->left);
    ans.push_back(root1->val);
    inorder1(ans,root1->right);

}
void inorder2(vector<int>& ans,TreeNode* root2){
    if(root2==NULL) return;
    inorder2(ans,root2->left);
    ans.push_back(root2->val);
    inorder2(ans,root2->right);

}
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        
        inorder1(ans,root1);
        inorder2(ans,root2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};