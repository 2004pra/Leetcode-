class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
          sort(nums.begin(),nums.end());
          int j = 1;
          int i = 0;

          while(i<n && j<n){
          if(nums[i]==nums[j]){
            return true;
          }
          i++;
          j++;
    }
        return false;
    }
};