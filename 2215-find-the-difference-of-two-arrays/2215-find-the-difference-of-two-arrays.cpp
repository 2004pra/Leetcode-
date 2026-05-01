class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        set<int> st(nums1.begin(),nums1.end());
        set<int> bt(nums2.begin(),nums2.end());
        vector<int> ans1;
        vector<int> ans2;
        for(auto it : st){
            if(bt.find(it)==bt.end()) ans1.push_back(it);
        }
         for(auto it : bt){
            if(st.find(it)==st.end()) ans2.push_back(it);
        }
        vector<vector<int>> ans3;
        ans3.push_back(ans1);
        ans3.push_back(ans2);
        return ans3;
    }
};