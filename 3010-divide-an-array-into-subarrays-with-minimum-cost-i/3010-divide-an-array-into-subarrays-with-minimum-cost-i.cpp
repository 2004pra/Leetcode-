class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        int a = nums[0];
        nums.erase(nums.begin()+0);
        sort(nums.begin(),nums.end());
        int b = nums[0];
        int c = nums[1];
        return a + b + c;
    }
};