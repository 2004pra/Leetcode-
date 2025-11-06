class Solution {
public:
    bool canJump(vector<int>& nums) {
        int dist = 0;
        for(int i =0;i<nums.size();i++){
            
            if(i>dist){
                return false;
            }
            dist = max(dist,i+nums[i]);
        }
        return true;
    }
};