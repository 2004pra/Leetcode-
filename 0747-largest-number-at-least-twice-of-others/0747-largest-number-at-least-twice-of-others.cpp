class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
       
        int maxi = *max_element(nums.begin(),nums.end());
        auto it = find(nums.begin(),nums.end(),maxi);
        for(auto x : nums){
            if((x*2)>maxi && x!=maxi){
                return -1;
            }
        }
        return it-nums.begin();
    }
};