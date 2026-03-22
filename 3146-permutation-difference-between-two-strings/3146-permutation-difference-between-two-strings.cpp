class Solution {
public:
    int findPermutationDifference(string s, string t) {
        
        unordered_map<char,int> tp;
        for(int i=0;i<t.size();i++){
            tp[t[i]]=i;
        }
        int p=0;
        for(int i=0;i<s.size();i++){
            int x = abs(i-tp[s[i]]);
            p+=x;
        }
        return p;

    }
};