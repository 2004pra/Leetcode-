class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();
        
        vector<int> winfreq(26,0),pfreq(26,0);
        vector<int> ans;
        if(m>n) return ans;
        for(int i=0;i<p.size();i++){
            pfreq[p[i]-'a']++;
        }
        for(int i=0;i<p.size();i++){
           winfreq[s[i]-'a']++;
        }
        if(winfreq==pfreq) ans.push_back(0);
        for(int i=p.size();i<n;i++){
            winfreq[s[i]-'a']++;
            winfreq[s[i-m]-'a']--;
            if(winfreq==pfreq){
                ans.push_back(i-m+1);
            }
        }
        return ans;
    }
};