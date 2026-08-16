class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        const int MOD = 1e9 + 7;
        int cnt = 0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            string s = to_string(nums[i]);
            reverse(s.begin(),s.end());
            long long ans = stoll(s);
            int diff = nums[i]-ans;
            if(mp.find(diff)!=mp.end()){
                cnt+=mp[diff];
                cnt%=MOD;
            }
            mp[diff]++;
        }
        return cnt%MOD;
    }
};