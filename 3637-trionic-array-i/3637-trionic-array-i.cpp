class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        bool p;
        bool started = false;
        for (int i = 0; i < n - 1; i++) {
            if(nums[i+1]==nums[i]) return false;
            if(!started){
                if(nums[i+1]<nums[i]){
                    return false;
                }
                else{
                    p=true;
                    started=true;
                }
            }
            else{
            if(nums[i+1]<nums[i] && p==true){
                cnt++;
                p=false;
            }
            else if(nums[i+1]>nums[i] && p==false){
                cnt++;
                p=true;
            }
            }
        }
        return cnt == 2;
    }
};