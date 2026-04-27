class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        set<int> st;
        for(int i : arr) mp[i]++;
        for(auto it : mp)st.insert(it.second);
        if(st.size()<mp.size()) return false;
        return true;


    }
};