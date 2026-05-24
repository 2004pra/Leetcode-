class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int n = pattern.size();
        unordered_map<char,int> mp;
        vector<int> v;
        for(int i=0;i<pattern.size();i++){
            if(mp.find(pattern[i])!=mp.end()){
                v.push_back(mp[pattern[i]]);
            }
            else{
        v.push_back(-1);
    }
            mp[pattern[i]]=i;
        }
        vector<string> ans;
        for(int i=0;i<words.size();i++){
              string s = words[i];
              unordered_map<char,int> np;
              vector<int> u;
              for(int j=0;j<s.size();j++){
            if(np.find(s[j])!=np.end()){
                u.push_back(np[s[j]]);
            }
            else{
        u.push_back(-1);
    }
            np[s[j]]=j;
        }
              if(u.size()==v.size()){
                bool bhola = true;
                for(int k =0;k<v.size();k++){
                    if(v[k]!=u[k]) bhola = false;
                }
                if(bhola==true) ans.push_back(s);
              }
        }
        return ans;
        
    }
};