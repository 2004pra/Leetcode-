class Solution {
public:
    int maxProduct(vector<int>& nums) {
      int pre = 1;
      int maxim = INT_MIN;
      int n = nums.size();
      int suffi = 1;

      for(int i =0; i<n ; i++){
           if(pre==0)pre=1;
           if(suffi==0)suffi=1;
           pre*=nums[i];
           suffi*=nums[n-i-1];
           maxim=max(maxim,max(pre,suffi));
      }
      return maxim;
      


    }
};