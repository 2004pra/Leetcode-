class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        int max1=(nums[n-1]-1);
        int max2=(nums[n-2]-1);
        return max2*max1;
    }
};