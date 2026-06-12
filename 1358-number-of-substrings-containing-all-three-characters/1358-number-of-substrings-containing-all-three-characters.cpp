class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans = 0;
        int n = s.size();
        vector<int> freq(3,0);
        int l =0;
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
            while(freq[0] > 0 &&
               freq[1] > 0 &&
               freq[2] > 0 ){
                ans+=(n-i);
                 
                freq[s[l]-'a']--;
                l++; 

               }
        }
        return ans;
    }
};