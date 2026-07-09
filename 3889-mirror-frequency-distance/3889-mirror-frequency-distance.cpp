class Solution {
public:
    int mirrorFrequency(string s) {
        int n = s.size();
        unordered_map<char,int> mp;
        unordered_map<char,int> pos;
        unordered_map<char,int> pos2;
        unordered_map<char,int> vis;
        vector<int> alpha = {
       'a','b','c','d','e','f','g','h','i','j','k','l','m',
       'n','o','p','q','r','s','t','u','v','w','x','y','z'
       };
       for(int i = 0;i<alpha.size();i++) pos[alpha[i]]=i;
       vector<char> digits = {
        '0','1','2','3','4','5','6','7','8','9'
      };
      for(int i = 0;i<digits.size();i++) pos2[digits[i]]=i;
        for(char c : s) mp[c]++;
        int sum =0;
        set<char> st(s.begin(),s.end());
         for(auto it : st){
            if(isalpha(it)){
            int main = pos[it];
            int mirror = pos[alpha[25-main]];
            char f = alpha[main];
            char se = alpha[mirror];
            if(vis.find(f)==vis.end() && vis.find(se)==vis.end()){
                sum+=abs(mp[f]-mp[se]);
                vis[f]=1;
                vis[se]=1;
            }
            }
            if(isdigit(it)){
            int main = pos2[it];
            int mirror = pos2[digits[9-main]];
            char f = digits[main];
            char se = digits[mirror];
            if(vis.find(f)==vis.end() && vis.find(se)==vis.end()){
                sum+=abs(mp[f]-mp[se]);
                vis[f]=1;
                vis[se]=1;
            }
            }
         }
         return sum;

    }
};