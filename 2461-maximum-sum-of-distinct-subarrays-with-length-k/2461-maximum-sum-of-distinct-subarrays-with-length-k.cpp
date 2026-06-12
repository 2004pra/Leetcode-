class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<long long ,long long> mp;
        int n = nums.size();
        int l =0;
        long long sum =0;
        long long maxi = 0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            mp[nums[i]]++;
            if(i-l+1>k){
                sum-=nums[l];
                mp[nums[l]]--;
                if(mp[nums[l]]==0){
                    mp.erase(nums[l]);
                }

                l++;
            }
            if(i-l+1==k && mp.size()==k){
                maxi = max(maxi,sum);
            }
        }
        return maxi;
    }
};