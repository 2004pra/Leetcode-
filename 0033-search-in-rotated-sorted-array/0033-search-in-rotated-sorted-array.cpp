class Solution {
public:

int findKRotation(vector<int> &nums ) {
        
      int  start = 0;
    int  end = nums.size() - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        
        if (nums[mid] > nums[end]) {
            start = mid + 1;
        } else {
           
            end = mid;
        }
    }

    
    return start;
    }


    // binary search function 
      int bs(vector<int>& nums, int target,int start,int end){
        int s = nums.size();
       
       
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                start = mid +1;
            }
        }
        return -1;
      }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
       int index = findKRotation(nums);
        int a1=bs(nums,target,0,index-1);
        int a2=bs(nums,target,index,n-1);
         if(a1==-1){
            return a2;
         }
         else{
            return a1;
         }

    }
};