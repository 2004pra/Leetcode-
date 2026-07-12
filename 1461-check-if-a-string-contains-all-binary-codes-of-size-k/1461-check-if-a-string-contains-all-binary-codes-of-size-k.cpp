class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.size();
        set<string> st;
        int g = pow(2,k);
        for(int i=0;i<=n-k;i++){
            string a = s.substr(i,k);
            st.insert(a);
        }
        
        if(st.size()==g) return true;
        return false;
    }
};