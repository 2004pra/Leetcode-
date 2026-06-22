class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n = text.size();
        unordered_map<char,int> mp;
        for(char  c : text) {
            
            mp[c]++;
            
        }
       int cnt =0;
       
            while(mp['b']>=1 &&
               mp['a']>=1 &&
               mp['l']>=2 &&
               mp['o']>=2 &&
               mp['n']>=1){
                cnt++;
                mp['b']--;
                mp['a']--;
                mp['l']-=2;
                mp['o']-=2;
                mp['n']--;
               }
        return cnt;

    }
};