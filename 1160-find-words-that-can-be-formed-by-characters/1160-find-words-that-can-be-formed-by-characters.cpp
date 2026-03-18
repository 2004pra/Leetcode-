class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> mp;
        int sum=0;
        for(char s : chars){
            mp[s]++;
        }
        for(int i=0;i<words.size();i++){
            int n = words[i].size();
            unordered_map<char,int> st;
            for(auto a : words[i]){
                st[a]++;
            }
            bool ok = true;
            for(auto it : st){
                if(mp.find(it.first)!=mp.end()){
                    if(mp[it.first]>=it.second){
                        continue;
                    }
                    else{
                        ok=false;
                        break;
                    }
                }
                else{
                    ok=false;
                    break;
                }
            }
            if(ok){
                sum+=n;
            }
        }
        return sum;
    }
};