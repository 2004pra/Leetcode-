class Solution {
public:
    int heightChecker(vector<int>& nums) {
        vector<int> v = nums;
        sort(v.begin(),v.end());
        int cnt =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=v[i]) cnt++;
        }
        return cnt;
    }
};