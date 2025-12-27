class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       int n = nums.size();
       unordered_map<int,int> mp;
       mp[0]=-1;
       int pre = 0;
       int maxi = 0;
       for(int i =0;i<n;i++){
        if(nums[i]==0) pre+=-1;
        else pre+=1;

        if(mp.find(pre)!=mp.end()){
            maxi = max(maxi,i-mp[pre]);
        }
        else{
            mp[pre]=i;
        }

       }
       return maxi;

    }
};