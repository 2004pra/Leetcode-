class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
         sort(nums.begin(), nums.end());
        int totsum =  accumulate(nums.begin(), nums.end(), 0), sum = 0;
        vector<int> ans{};
        for(int i = nums.size()-1; i >= 0; --i)
        {
            sum += nums[i];
            ans.push_back(nums[i]);
            if(sum > totsum-sum)
                break;
        }
        return ans;
    }
};