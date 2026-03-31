class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        int n = deck.size();
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[deck[i]]++;
        }
          int g =0;
     for(auto it : mp){
        g = __gcd(g,it.second);
     }

        return g>=2;
    }
};