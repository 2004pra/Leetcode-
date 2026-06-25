class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        int cnt = 0;
         for(int i=0;i<n;i++){
            int freq =0;
            int size =0;
            for(int j=i;j<n;j++){
               if(nums[j]==target){
                freq++;
               }
               size++;
               if(freq>(size/2)) cnt++;
            }
            
         }
         return cnt;
    }

};