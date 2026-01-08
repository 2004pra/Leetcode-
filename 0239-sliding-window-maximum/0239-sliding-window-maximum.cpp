class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> dq;
        vector<int> res;

        // for first window 
        for(int i =0;i<k;i++){
            while(dq.size()>0 && nums[dq.back()]<=nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }

        // for other windows 
        for(int i = k;i<n;i++){
            res.push_back(nums[dq.front()]);

            // for removing the values that are not in current window from
            //deque
              while(dq.size() && dq.front()<=i-k){
                dq.pop_front();
              }
           // yeh vala loop viable answer store karne ke liye hai 
               while(dq.size()>0 && nums[dq.back()]<=nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);

        }
        res.push_back(nums[dq.front()]);
        return res;
    }
};