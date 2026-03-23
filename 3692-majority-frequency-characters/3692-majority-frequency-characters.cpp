class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        unordered_map<int,string> tp;
        for(auto it : mp){
            tp[it.second].push_back(it.first);
        }
        int maxi =0;
        int f =0;
        string ans="";
        for(auto it: tp){
             if(maxi < it.second.size()){
                maxi=it.second.size();
                f = it.first;
                ans = it.second;
             }
             else if(maxi == it.second.size()){
                 if(f<it.first){
                    maxi = it.second.size();
                    f=it.first;
                    ans=it.second;
                 }
             }
        }
        return ans;
    }
};