class Solution {
public:
    int distinctAverages(vector<int>& nums) {
         int n = nums.size();
         unordered_map<double,int> mp;
         sort(nums.begin(),nums.end());
         for(int i=0;i<n/2;i++){
             double avg = (nums[i]+nums.back())/2.0;
             nums.pop_back();
             mp[avg]++;
         }
         return mp.size();
    }
};