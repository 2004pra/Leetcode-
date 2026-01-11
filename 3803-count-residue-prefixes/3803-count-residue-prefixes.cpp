class Solution {
public:
    int residuePrefixes(string s) {
        int n = s.size();
        unordered_map<char,int> mp;
        string prefix="";
        int dist = 0;
        int cnt = 0;
        for(int i =0;i<n;i++){
            prefix+=s[i];
            int size = prefix.size();
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]++;
                dist++;
            }
                if(dist==size%3){
                    cnt++;
                
            }
        } 
        return cnt;
    }
};