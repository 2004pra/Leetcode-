class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        unordered_map<int,int> mp;
        vector<int> ans(n,-1);
        stack<int> st;
        for(int i =0;i<m;i++){
            while(!st.empty() && nums2[i]>st.top()){
                mp[st.top()]=nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }

        for(int i =0;i<n;i++){
            if(mp.find(nums1[i])!=mp.end()){
                ans[i]=mp[nums1[i]];
            }
        }
        return ans;
    }
};