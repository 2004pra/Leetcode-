class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int x = nums[i];
             string s = to_string(x);
             reverse(s.begin(),s.end());
              x = stoi(s);
             nums.push_back(x); 
        }
        set<int> st(nums.begin(),nums.end());
        return st.size();
    }
};