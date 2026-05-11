class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int> st(nums.begin(),nums.end());
        int n = nums.size();
        
        for(int i=n-1;i>=0;i--){
             int x = -nums[i];
            if(st.find(x)!=st.end()) return nums[i];
        }
        return -1;
    }
};