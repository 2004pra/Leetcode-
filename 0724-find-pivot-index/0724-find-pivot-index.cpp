class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     int ls =0;
     int rs = 0;
     int total =0;
     for(int i =0;i<nums.size();i++){
        total+=nums[i];
     }
     for(int i=0;i<nums.size();i++){
          rs = total-ls-nums[i];
        if(ls==rs) return i;
      
        ls+=nums[i];
     }
     return -1;
    }
};