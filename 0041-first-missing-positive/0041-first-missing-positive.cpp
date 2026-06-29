class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        bool flag = false;
        int id = 0;
        int ans =0;
        for(int i=0;i<n;i++){
            if(nums[i]==1) {
                flag = true;
                break;
            }    
        }
        if(!flag) return 1;
        else {
            sort(nums.begin(),nums.end());
            for(int i=0;i<n;i++){
                if(nums[i]==1){
                    id=i;
                    break;
                }
            }
            
            for(int i=id+1;i<n;i++){
               if(nums[i]-nums[i-1]>1){
                  return nums[i-1]+1;
               }
            }
        }
        return nums[n-1]+1;
        
    }
};