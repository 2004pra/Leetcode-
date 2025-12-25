class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long prod = 1;
        for(long long i =0;i<nums.size();i++){
            prod= (long long)prod*nums[i]; 
        }
        if(prod<0){
            return -1;
        }
        else if(prod>0){
            return 1;
        }
        else{
            return 0;
        }
        
    }

};