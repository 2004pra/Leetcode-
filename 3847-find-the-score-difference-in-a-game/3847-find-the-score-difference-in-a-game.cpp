class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int a = 0;
        int b = 0;
        bool f = true;
        for(int i=0;i<nums.size();i++){
            int n = nums[i];
            if(n%2==1) f=!f;
            if(i%6==5) f=!f;
            if(f) a+=nums[i];
            else b+=nums[i];
        }
        return a-b;
    }
};