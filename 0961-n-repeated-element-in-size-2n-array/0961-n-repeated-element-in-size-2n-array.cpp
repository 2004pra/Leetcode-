class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int m = nums.size();
        int n = m/2;
        map<int,int> mp;
        for(int i =0;i<m;i++){
           mp[nums[i]]++;
        }
        int ans =0;
        for(auto &it : mp){
            if(it.second==n){
                ans = it.first;
                break;
            }
        }
        return ans;
    }
};