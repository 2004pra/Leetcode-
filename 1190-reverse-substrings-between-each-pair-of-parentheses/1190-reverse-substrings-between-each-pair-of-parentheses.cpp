class Solution {
public:
    string reverseParentheses(string s) {
        string ans = "";
        stack<int> st;
        for(char c : s){
            if(c=='('){
                st.push(ans.size());
            }
            else if(c==')'){
                reverse(ans.begin()+st.top(),ans.end());
                st.pop();
            }
            else{
                ans+=c;
            }
        }
        return ans;
    }
};