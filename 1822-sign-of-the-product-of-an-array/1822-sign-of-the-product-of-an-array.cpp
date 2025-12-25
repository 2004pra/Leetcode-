class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long prod = 1;
        for(long long i =0;i<nums.size();i++){
           if(nums[i]==0){
            return 0;
           }
           else if(nums[i]<0){
            prod = - prod;
           }
        }
        return prod;
        
    }

};