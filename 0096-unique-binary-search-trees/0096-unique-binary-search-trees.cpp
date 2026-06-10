class Solution {
public:
    
   vector<int> dp;
    int solve(int n){
        if(n==0) return 1;
        int  ans =0;
        if(dp[n]!=-1){
            return dp[n];
        }
        for(int i=1;i<=n;i++){
        int leftn = i-1;
        int  rightn = n-i;
        int  leftbst = solve(leftn);
            int rightbst = solve(rightn);
            ans+=(leftbst*rightbst);
        }
        return dp[n]=ans;
    }
    int numTrees(int n) {
        dp.resize(n+1,-1);
        return solve(n);
    }
};