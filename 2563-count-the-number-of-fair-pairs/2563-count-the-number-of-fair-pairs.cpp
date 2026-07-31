class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n = nums.size();
        long long cnt = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++) {
            auto left = lower_bound(nums.begin() + i + 1, nums.end(),(long long)lower - nums[i]);

            auto right = upper_bound(nums.begin() + i + 1, nums.end(),(long long)upper - nums[i]);

            cnt+=(right-left);
        }
        return cnt;
    }
};