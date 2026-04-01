class Solution {
public:
    int distributeCandies(vector<int>& v) {
        int n = v.size()/2;
        set<int> st(v.begin(),v.end()); 
        int i=0;
        while(i<n && i<st.size()) i++;
        
        return i;
    }
};