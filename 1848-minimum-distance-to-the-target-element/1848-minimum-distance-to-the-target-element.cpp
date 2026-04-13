class Solution {
public:
    int getMinDistance(vector<int>& nums, int t, int s) {
        int n = nums.size();
        int ans1 =INT_MAX;
        int ans2= INT_MAX;
        for(int i=s;i<n;i++){
            if(nums[i]==t){
               ans1 = abs(i-s);
               break;
            }
        }
        for(int i=s;i>=0;i--){
            if(nums[i]==t){
                ans2=abs(i-s);
                break;
            }
        }
        return min(ans1,ans2);
    }
};