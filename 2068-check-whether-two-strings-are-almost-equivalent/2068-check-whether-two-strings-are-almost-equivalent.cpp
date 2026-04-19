class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        for(char c : word1){
            mp1[c]++;
        }
        for(char c : word2){
            mp2[c]++;
        }

        for(auto it : mp1){
            if(mp2.find(it.first)==mp2.end()){
                if(it.second>3 ) return false;
            }
            else{
                if((it.second - mp2[it.first])>3) return false;
            }
        }
        for(auto it : mp2){
            if(mp1.find(it.first)==mp1.end()){
                if(it.second>3 ) return false;
            }
            else{
                if((it.second - mp1[it.first])>3) return false;
            }
        }
        return true;
    }
};