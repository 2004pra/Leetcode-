class Solution {
public:
    int minimumCardPickup(vector<int>& nums) {
        int n = nums.size();
        int l =0;
        int mini = INT_MAX;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
          if(mp.find(nums[i])!=mp.end()){
             
             mini = min(mini,i-mp[nums[i]]+1);
          }
          mp[nums[i]]=i;
        }
        if (mini != INT_MAX){
            return mini;
        }
        return -1;
    }
};