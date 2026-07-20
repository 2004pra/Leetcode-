class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        set<int> st(target.begin(),target.end());
        vector<string> ans;
        int m = target[target.size()-1];
        for(int i=1;i<=m;i++){
            if(st.find(i)==st.end()){
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            else{
                ans.push_back("Push");
            }  
        }
        return ans;
    }
};