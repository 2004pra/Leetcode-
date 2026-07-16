class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long> pre(n);
        long long maxi = INT_MIN;
        for(int i=0;i<n;i++){
          if(nums[i]>maxi) maxi=nums[i];
          pre[i]=gcd(maxi,nums[i]);
        }
        sort(pre.begin(),pre.end());
        int i=0;
        int j = pre.size()-1;
        long long sum =0;
        while(i<j){
           sum+=gcd(pre[i],pre[j]);
           i++;
           j--;
        }
        return sum;
    }
};