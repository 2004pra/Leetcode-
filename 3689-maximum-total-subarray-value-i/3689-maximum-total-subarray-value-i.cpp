class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n = nums.size();
        long long maxi = INT_MIN;
        long long mini = INT_MAX;
        long long ans =0;
        for(long long i : nums){
            if(mini>i){
                mini = i;
            }
            if(maxi<i){
                maxi = i;
            }
        }
        ans = (maxi-mini)*k;
        return ans;
    }
};