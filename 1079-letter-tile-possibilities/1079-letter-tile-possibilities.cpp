class Solution {
public:
   int dfs(vector<int>& freq){
           int ans =0;
           for(int i=0;i<26;i++){
            if(freq[i]==0) continue;
            ans++;
            freq[i]--;
            ans+=dfs(freq);
            freq[i]++;
           }
           return ans;
   }
    int numTilePossibilities(string tiles) {
        vector<int> freq(26,0);
        for(char c : tiles){
              freq[c-'A']++;
        }
        return dfs(freq);
    }
};