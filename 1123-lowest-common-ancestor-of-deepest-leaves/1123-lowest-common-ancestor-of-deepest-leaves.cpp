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
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if(root==NULL) return NULL;
        queue<TreeNode*> q;
        unordered_map<TreeNode*,TreeNode*> parent;
        q.push(root);
        vector<TreeNode*> v;
        while(q.size()>0){
            int size = q.size();
            v.clear();
            for(int i =0;i<size;i++){
                TreeNode* curr = q.front();
                q.pop();
                v.push_back(curr);
                if(curr->left){
                    parent[curr->left]= curr; 
                    q.push(curr->left);
                }
                if(curr->right) {
                    parent[curr->right]=curr;
                    q.push(curr->right);
                }
            }
        }
        unordered_set<TreeNode*> s(v.begin(), v.end());
        while(s.size()>1){
            unordered_set<TreeNode*> next;
            for(auto node : s){
                next.insert(parent[node]);
            }
            s=next;
        }
        return *s.begin(); 
    }
};