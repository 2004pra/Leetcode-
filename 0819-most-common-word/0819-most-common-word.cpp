class Solution {
public:
    string mostCommonWord(string p, vector<string>& banned) {
        int n = p.size();
        vector<string> v;
        string s = "";
        for(int i=0;i<n;i++){
            
            if(isalpha(p[i])){
                s+=tolower(p[i]);
            }
            else{
                if(!s.empty()){
                    v.push_back(s);
                    s.clear();
                }
            }
        }
        if(s.size()!=0){
        v.push_back(s);
        }
        unordered_map<string,int> mp;
        for(string w : v) mp[w]++;
        set<string> st(banned.begin(),banned.end());
        int maxi = 0;
        string ans = "";
        for(auto it : mp){
            if(maxi<it.second && st.find(it.first)==st.end()){
                ans=it.first;
                maxi=it.second;
            }
        } 
        return ans;
    }
};