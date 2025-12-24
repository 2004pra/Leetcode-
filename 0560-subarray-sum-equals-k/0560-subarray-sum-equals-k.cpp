class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int> mpp;
        int pre = 0;
        mpp[0]=1;
        int n = nums.size();
         int count = 0;
        for(int i =0;i<n;i++){
                pre = pre + nums[i];
                if(mpp.find(pre-k)!=mpp.end()){
                    count = count + mpp[pre-k]; 
                }
                mpp[pre]++;
       }
       return count;

    }
};