class Solution {
public:

    int f(vector<int>& nums, int target){
        int n = nums.size();
        int first = -1;
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                first = mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low = mid+1;
     }
     else{
        high = mid-1;
     }
        }
        return first;
    }


// last occurence fucntion 

int l(vector<int>& nums,int target){
    int n = nums.size();
    int last =-1;
    int low = 0; 
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target){
            last = mid;
            low=mid+1;
        }
        else if(nums[mid]<target){
            low =mid+1;

        }
        else{
            high =mid-1;
        }
    }
    return last;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int fi = f(nums,target);
        if(fi==-1) return {-1,-1};
        int la = l(nums,target);
        return {fi,la}; 
    }
};