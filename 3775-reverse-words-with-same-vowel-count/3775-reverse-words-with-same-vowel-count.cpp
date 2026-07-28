class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        vector<string> st;
        string a = "";
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                st.push_back(a);
                a="";
            }else  a+=s[i];
        }
        st.push_back(a);
        int fwvc = 0; 
        string extra = st[0];
        for(int i=0;i<extra.size();i++){
           if(extra[i]=='a' || extra[i]=='e'||extra[i]=='i'|| extra[i]=='o'|| extra[i]=='u' ){
            fwvc++;
           }
        }
        for(int i=1;i<st.size();i++){
             int cnt =0;
             string b = st[i]; 
             for(int j=0;j<b.size();j++){
                if(b[j]=='a' || b[j]=='e'||b[j]=='i'|| b[j]=='o'|| b[j]=='u' ){
            cnt++;
           }
           }
           if(cnt==fwvc){
            reverse(b.begin(),b.end());
            st[i]=b;
           }
        }
        string ans ="";
        for(string s : st){
            ans+=s;
            ans+=' ';
        }
        return ans.substr(0,ans.size()-1);
        

    }
};