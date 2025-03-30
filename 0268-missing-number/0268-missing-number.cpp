class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n = nums.size();
        int sum1 = 0;
        int summ2 = 0;
        for(int i=1;i<n+1;i++){
            sum1=sum1+i;
        }
        for(int i=0;i<n;i++){
            summ2 = summ2 + nums[i];
        }
        return (sum1-summ2);
    }
};