class Solution {
public:
    long long maximumScore(vector<int>& nums) {
       int n = nums.size();
       vector<long long> prefix;
       long long pre = 0;
       for(int i =0;i<n;i++){
        pre+=nums[i];
        prefix.push_back(pre);
       } 
       //for suffmin 
       int mini = INT_MAX;
       vector<long long> suffmin(n);
       for(int i=n-1;i>=0;i--){
        suffmin[i]=mini;
        mini=min(mini,nums[i]);
       }
        //for checking maximum score
        long long maxi = INT_MIN;
        long long score=0;
        for(int i=0;i<n-1;i++){
             score=prefix[i]-suffmin[i];
             maxi=max(score,maxi);
        }
       return maxi;
    }
};