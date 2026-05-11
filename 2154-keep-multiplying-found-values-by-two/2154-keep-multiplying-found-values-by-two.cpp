class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> st(nums.begin(),nums.end());
        int n = nums.size();
        while(st.find(original)!=st.end()){
            original = original*2;
        }
        return original;
    }
};