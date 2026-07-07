class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> sc(26,0);
        vector<int> tc(26,0);
        for(char c:s){
            sc[c-'a']++;
        }
        for(char c:t){
            tc[c-'a']++;
        }
        int cnt =0;
        for(int i=0;i<26;i++){
            cnt+=abs(sc[i]-tc[i]);
        }
        return cnt/2;
    }
};