class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int> st;
        int n = t.size();
        int sum =0;
        for(int i=0;i<n;i++){
            if(t[i]!="+"&&
               t[i]!="-"&&
               t[i]!="*"&&
               t[i]!="/"){
                int x = stoi(t[i]);
                st.push(x);
            }
            else {
                int b = st.top();st.pop();
                int a = st.top();st.pop();
                if(t[i]=="+") st.push(a+b);
                else if(t[i]=="-") st.push(a-b);
                else if(t[i]=="*") st.push(a*b);
                else if(t[i]=="/") st.push(a/b);
            }
        }
        return st.top();
    }
};