class Solution {
public:
    bool allFrequenciesEqual(vector<int>& freq) {
        int x = 0;

        for (int f : freq) {
            if (f == 0)
                continue;

            if (x == 0)
                x = f;
            else if (f != x)
                return false;
        }

        return true;
    }
    int longestBalanced(string s) {
        int n = s.size();
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            vector<int> freq(26,0);
            for (int j = i; j < n; j++) {
                freq[s[j]-'a']++;
                if(allFrequenciesEqual(freq)){
                    maxi = max(maxi,j-i+1);
                }
            }
        }
        return maxi;
    }
};