class Solution {
public:
    int minDeletion(string s, int k) {
        int n = s.size();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++) mp[s[i]]++;
        vector<int> v;
        for(auto it : mp) v.push_back(it.second);
        sort(v.begin(),v.end());
        if(mp.size()<=k) return 0;
        int d = mp.size()-k;
        int ans = 0;
        for(int i=0;i<v.size();i++){
            if(v.size()-i==k) break;
            ans+=v[i];
            
        }
        return ans;
    }
};