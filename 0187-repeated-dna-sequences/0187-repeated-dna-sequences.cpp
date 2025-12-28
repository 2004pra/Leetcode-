class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.size();
        vector<string> ans;
        unordered_map<string,int> mp;
        for(int i=0,j=9;i<n && j<n;i++,j++){
             string l =s.substr(i,j-i+1);
             if(mp[l]==1){
                  ans.push_back(l);
             }
             mp[l]++;
        }
     return ans;
    }
};