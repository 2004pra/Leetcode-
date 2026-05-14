class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        unordered_map<char,vector<int>> mp;
        vector<int> v;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(s[i]==c){
            v.push_back(i);
            }
        }
        for(int i=0;i<n;i++){
            int mini = INT_MAX;
            for(int j=0;j<v.size();j++){
                int x = abs(i-v[j]);
                mini = min(mini,x);
            }
            ans.push_back(mini);
        }
        return ans;
        
    }
};