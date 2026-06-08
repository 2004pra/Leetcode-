class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> a;
        vector<int> b;
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==pivot) cnt++;
        }

        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
              a.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>pivot){
              b.push_back(nums[i]);
            }
        }
        vector<int> result;
        for(int i=0;i<a.size();i++){
            result.push_back(a[i]);
        }
        for(int i=0;i<cnt;i++){
           result.push_back(pivot);
        }
        for(int i=0;i<b.size();i++){
            result.push_back(b[i]);
        }
        return result;
    }
};