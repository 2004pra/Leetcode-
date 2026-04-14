class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        int prefix =0;
        for(int i=0;i<n;i++){
            prefix +=nums[i];
            nums[i]=prefix;
        }
        return nums;
    }
};