class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int pre = 0;
        int count = 0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            pre+=nums[i];
            if(mp.find(pre-goal)!=mp.end()){
                count+=mp[pre-goal];
            }
        
                mp[pre]++;
            
        }
        return count;
    }
};