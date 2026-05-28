class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& b) {
        unordered_map<int,int> mp;
        vector<int> ans;
        int n = b.size();
     for(int i=0;i<n;i++){
           mp[b[i]]++;
        }
        for(auto it : mp){
            if(it.second%2!=0) ans.push_back(it.first);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};