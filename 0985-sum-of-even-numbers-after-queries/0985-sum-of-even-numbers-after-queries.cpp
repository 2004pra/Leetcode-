class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = queries.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            nums[queries[i][1]]= nums[queries[i][1]] + queries[i][0];
            int sum = 0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]%2==0) sum+=nums[j];
            }
            ans[i]=sum;
        }
        return ans;
    }
};