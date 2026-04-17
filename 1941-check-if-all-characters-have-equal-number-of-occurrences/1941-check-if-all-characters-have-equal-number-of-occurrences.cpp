class Solution {
public:
    bool areOccurrencesEqual(string s) {
         unordered_map<char,int> mp;
         for(int i=0;i<s.size();i++){
            mp[s[i]]++;
         }
         auto it = mp.begin();
         int x = it->second;
         for (auto it : mp){

            if(it.second!=x) return false;
         }
         return true;
    }
};