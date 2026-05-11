class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int x = nums[i];
            string s ="";
            s = to_string(x);
            for(char c :s){
                int y = c - '0';
                ans.push_back(y);
            }
        }
        return ans;
    }
};