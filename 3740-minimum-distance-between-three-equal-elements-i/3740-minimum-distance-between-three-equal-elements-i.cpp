class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        int mini = INT_MAX;
        for(auto &it : mp){
            if (it.second.size()>=3){
               for (int i = 0; i + 2 < it.second.size(); i++) {
            int dis = abs(it.second[i] - it.second[i+1]) 
                    + abs(it.second[i+1] - it.second[i+2]) 
                    + abs(it.second[i+2] - it.second[i]);

            mini = min(mini, dis);
        }
            }
        }
        return (mini == INT_MAX) ? -1 : mini;
    }
};