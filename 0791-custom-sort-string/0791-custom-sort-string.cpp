class Solution {
public:
    string customSortString(string order, string s) {
        int n = order.size();
        int m = s.size();
        unordered_map<char,int> mp;
        for(char c : s) mp[c]++;
        string ans = "";
        for(int i=0;i<n;i++){
            if(mp.find(order[i])!=mp.end()){
                int x = mp[order[i]];
                for(int j=0;j<x;j++) ans+=order[i];
            }
        }
        for(int i=0;i<m;i++){
            if(ans.find(s[i])==string::npos){
                int x = mp[s[i]];
                for(int j=0;j<x;j++) ans+=s[i];
            }
        }
        return ans;
    }
};