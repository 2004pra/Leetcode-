class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> st;

        int n = nums1.size();
        int m = nums2.size();
        for(int i =0;i<n;i++){
                
             st.insert(nums1[i]);
        }

        for(int j =0;j<m;j++ ){
            if(st.find(nums2[j])!=st.end()){
                ans.push_back(nums2[j]);
                st.erase(nums2[j]);
            }
        }

       return ans;

    }
};