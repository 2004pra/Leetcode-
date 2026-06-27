class Solution {
public:

   int findKR(vector<int>& nums,int& t){
           int start = 0;
           int end = nums.size()-1;

          while(start<end){
            int mid = start + (end-start)/2;
            if(nums[mid]>nums[end]){
               start = mid+1;
            }else{
                end = mid;
            }
          }
          return start;
   }

   int bs(vector<int>& nums,int& t,int l,int r ){
    while(l<=r){
        int mid = l+(r-l)/2;
        if(nums[mid]==t){
            return mid;
        }
        else if(nums[mid]>t) r = mid-1;
        else l=mid+1;

       
    }
     return -1;
   }
    int search(vector<int>& nums, int target) {
       int index = findKR(nums,target);
       // abb 2 alag alag halfs main binary seacrh lagayenge  
       int a1 = bs(nums,target,0,index-1);
       int a2 = bs(nums,target,index,nums.size()-1);
       if(a1==-1) return a2;
       else return a1;

    }
};