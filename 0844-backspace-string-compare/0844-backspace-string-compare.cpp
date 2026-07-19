class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a = "";
        string b = "";
        for(char c : s){
            if(c=='#'  && a.size()>0) a.pop_back();
            if(c!='#') a+=c;
        }
        for(char c : t){
            if(c=='#' && b.size()>0) {
                b.pop_back();
            }
            if(c!='#') b+=c;
        }
        if(a==b) return true;
        return false;
    }
};