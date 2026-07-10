class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        unordered_map<int,int> np;
        for(int i : nums) mp[i]++;
        for(auto it : mp) np[it.second]++;
        if(mp.size()==1) return nums[0];
        for(int i  : nums){
            if(np[mp[i]]==1) return i;
        }
        return -1;
    }
};