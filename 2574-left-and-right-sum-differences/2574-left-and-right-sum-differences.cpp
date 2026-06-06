class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> a(n);
        vector<int> b(n);
        int l = 0;
        a[0]=0;
        b[n-1]=0;
        for(int i=1;i<n;i++){
                l+=nums[i-1];
                a[i]=l;
        }
        int r = 0;
        for(int j = n-2;j>=0;j--){
           r+=nums[j+1];
           b[j]=r;
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=abs(a[i]-b[i]);
        }
        return ans;

    }
};