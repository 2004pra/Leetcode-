class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        int n = s.size();
        string a="";
        for(int i=0;i<n;i++){
            
            if(s[i]!=' '){
              a+=s[i];
            }
            else{
                if(a.size()!=0){ 
                    v.push_back(a);
                    a="";
                }
            }
        }
        if(a.size()!=0){
        v.push_back(a);
        }
        string ans="";
        for(int i=v.size()-1;i>=0;i--){
            ans+=v[i]+" ";
        }
        int m = ans.size();
        return ans.substr(0,m-1);
    }
};