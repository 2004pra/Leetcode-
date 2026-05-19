class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        unordered_map<int,int> np;
        int mini = INT_MAX;
        for(int i : nums1) mp[i]++;
        for(int i : nums2) np[i]++;
        for(auto it : mp){
            if(np.find(it.first)!=np.end()){
               mini=min(it.first,mini);
            }
        }
        if(mini==INT_MAX) return -1;
        return mini;
    }
};