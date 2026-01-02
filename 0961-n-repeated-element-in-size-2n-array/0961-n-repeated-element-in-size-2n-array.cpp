class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int m = nums.size();
        int n = m/2;
        map<int,int> mp;
        for(int i =0;i<m;i++){
           mp[nums[i]]++;
           if(mp[nums[i]]==n){
            return nums[i];
           }
        }
    return -1;
    }
};