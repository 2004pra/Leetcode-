class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        int j = 0;
        
        vector<int> ans(2*n);
           int i = 0;
       while( i<n){
                ans[j]=nums[i];
                ans[j+1]=nums[n+i];
                i++;
                j=j+2;
       }
        return ans;
        

    }
};