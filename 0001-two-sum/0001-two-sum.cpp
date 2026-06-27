class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n = nums.size();
       unordered_map<int,int> mp;
       int pre = 0;
       for(int i=0;i<n;i++){
        pre = target - nums[i];
        if(mp.find(pre)!=mp.end()){
            return {mp[pre],i};
        }
        mp[nums[i]]=i;
       }
       return {-1};
    }
};