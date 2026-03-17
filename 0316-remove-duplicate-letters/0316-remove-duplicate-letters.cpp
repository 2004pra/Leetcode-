class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> last(256,-1);
        vector<bool> seen(256,false);
         int n = s.size();
         string ans="";
        for(int i=0;i<s.size();i++){
            last[s[i]]=i;
        }
         stack<char> st;
        

        for(int i=0;i<n;i++){
            char c = s[i];

            if(seen[c]){
               continue;
            }

            while(!st.empty() && st.top()>c && last[st.top()]>i){
                seen[st.top()]=false;
                st.pop();
            }

            st.push(c);
            seen[c]=true;
        }

        while(!st.empty()){
            ans =  st.top()+ans;
            st.pop();
        }

        return ans;

    }
};