class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n = nums.size();
        double avg = INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
               double m = (nums[i]+nums.back())/2.0;
               avg = min(m,avg);
               nums.pop_back();
            //    nums.erase(nums.begin());
               
        }
        return avg;
    }
};