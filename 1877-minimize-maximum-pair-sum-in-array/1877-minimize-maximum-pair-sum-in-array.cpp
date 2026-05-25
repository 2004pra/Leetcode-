class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        int j = n-1;
        int maxi = INT_MIN;
        while(i<j){
            int x = nums[i]+nums[j];
            maxi = max(maxi,x);
            i++;
            j--;
        }
        return maxi;
    }
};