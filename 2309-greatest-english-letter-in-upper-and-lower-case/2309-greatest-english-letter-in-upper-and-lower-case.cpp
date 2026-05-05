class Solution {
public:
    string greatestLetter(string s) {
        set<char> st(s.begin(),s.end());
        char maxi=0;
        for(char c : s){
            if(isupper(c)){
                char x = tolower(c);
                if(st.find(x)!=st.end()) {
                    maxi=max(maxi,c);
                }
            }
            else{
                char x = toupper(c);
                if(st.find(x)!=st.end()){
                maxi=max(maxi,x);
                }
            }
        }
        string a="";
        if(maxi==0) return"";
        a=a+maxi;
        return a;

    }
};