class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.rbegin(),nums.rend());
        set<int,greater<int>> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int cnt =0;
        vector<int> v;
        for(auto it : st){
            if(cnt==k){
                break;
            }
            v.push_back(it);
            cnt++;
        }
        return v;
    }
};