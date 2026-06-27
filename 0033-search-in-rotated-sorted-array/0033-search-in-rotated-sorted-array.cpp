class Solution {
public:
     int find(vector<int>& nums, int& t){
        int start = 0;
        int end = nums.size()-1;
        while(start<end){
            int mid = start +(end-start)/2;
            if(nums[mid]>nums[end]){
                start=mid+1;
            }
            else{
                end = mid;
            }
           
        }
        return start;
     }
     int bs(vector<int>& nums, int& t, int l, int r){
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid]==t) return mid;
            else if(nums[mid]<t)  l= mid+1;
            else r=mid-1;
        }
        return -1;
     }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int id =  find(nums,target);
        int a =  bs(nums,target,0,id-1);
        int b = bs(nums,target,id,n-1);
        if(a==-1) return b;
        else return a;
    }
};