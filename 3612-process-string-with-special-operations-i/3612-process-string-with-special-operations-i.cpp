class Solution {
public:
    string processStr(string s) {
        string ans = "";
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                ans+=ans;
            }
            else if(islower(s[i])){
                ans+=s[i];
            }
            else if(s[i]=='%' && ans.size()!=0){
                reverse(ans.begin(),ans.end());
            }
            else if(s[i]=='*' && ans.size()!=0){
                ans.pop_back();
            }
        }
        return ans;
    }
};