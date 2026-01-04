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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int maxsum = INT_MIN;
        int bestlevel = 1;
        int level = 1;
        
        while(q.size()>0){
            int size= q.size();
            int levelsum = 0;
          
            for(int i = 0;i<size;i++){
                TreeNode* curr = q.front();
                q.pop();
                levelsum+= curr->val;
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            
            if(levelsum>maxsum){
                maxsum = levelsum;
                bestlevel = level;
            } 
            level++;
        }       
return bestlevel;

    }
};