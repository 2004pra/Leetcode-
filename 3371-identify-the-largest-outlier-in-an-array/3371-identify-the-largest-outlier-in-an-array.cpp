class Solution {
public:
    int getLargestOutlier(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i : nums) mp[i]++;
        int maxi = INT_MIN;
        int t = accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<n;i++){
            int y = t - 2*nums[i];
            if(mp.find(y)!=mp.end()){
                if(nums[i]!=y){
                    maxi = max(maxi,y);
                }else if(nums[i]==y && mp[y]>=2){
                    maxi=max(maxi,y);
                }
            }
        }
        return maxi;
        

    }
};