class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        for(int i : nums) {
            
            mp[i]++;
            
        }
        int maxi = *max_element(nums.begin(),nums.end());
        if(n-1!=maxi || mp[n-1]!=2 ) return false;
        for(auto it : mp){
            if(it.first==n-1){
                if(it.second!=2) return true;
            }
            else if(it.second!=1) return false;
        }
        return true;
        
    }
};