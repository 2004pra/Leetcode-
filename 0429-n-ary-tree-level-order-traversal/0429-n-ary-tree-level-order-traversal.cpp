/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void bfs(Node* root , vector<vector<int>>& ans){
        queue<Node*> q;
         if(root==NULL) return;
         q.push(root);
         while(q.size()!=0){
            int size =q.size();
            vector<int> v;
            for(int i=0;i<size;i++){
                Node* curr = q.front();
                q.pop();
                v.push_back(curr->val);
                for(Node* child : curr->children){
                    if(child!=NULL) q.push(child);
                }
            }
            ans.push_back(v);
         }
    }
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        bfs(root,ans);
        return ans;

    }
};