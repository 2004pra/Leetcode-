class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char,int> mp;
        for(char c:s) mp[c]++;
        map<int,vector<char>> np;
        for(auto it : mp) np[it.second].push_back(it.first);
        string ans = "";
        for(auto it=np.rbegin();it!=np.rend();it++){
            int x = it->first;
            for(char c : it->second){
            for(int i=0;i<x;i++){
            ans+=c;
            }
            }
        }
        return ans;

    }
};