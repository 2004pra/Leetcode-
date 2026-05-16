class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int low = 0;
        int high = n;
        while(low<=high){
            int cnt =0;
            int mid = low + high-low/2;
            for(int i=0;i<n;i++){
                if(nums[i]>=mid) cnt++;
            }
            if(cnt==mid){
                return mid;
            }
            else if(cnt>mid) low=mid+1;
            else high = mid-1; 
        }
        return -1;
    }
};