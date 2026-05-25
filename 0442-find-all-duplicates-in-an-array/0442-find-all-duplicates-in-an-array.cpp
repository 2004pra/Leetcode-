class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int cnt =1;
        int pre = -1;
        for(int i =1;i<n;i++){
            
            if(nums[i]==nums[i-1] && nums[i]!=pre ){
                pre = nums[i];
               cnt++;
            }
            if(cnt==2) {
                ans.push_back(nums[i-1]);
                cnt=1;
            }
           
        }
        return ans;
    }
};