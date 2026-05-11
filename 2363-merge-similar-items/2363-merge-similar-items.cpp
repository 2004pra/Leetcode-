class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& a, vector<vector<int>>& b) {
        int n = a.size();
        int m = b.size();
        map<int,int> mp;
        map<int,int> np;
        for(int i =0;i<n;i++){
           mp[a[i][0]]+=a[i][1];
        }
        for(int i =0;i<m;i++){
           mp[b[i][0]]+=b[i][1];
        }
        vector<vector<int>> ans;
        for(auto it : mp ){
             ans.push_back({it.first,it.second});
        }
        return ans;
    }
};