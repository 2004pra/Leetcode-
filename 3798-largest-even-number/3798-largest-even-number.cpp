class Solution {
public:
    string largestEven(string s) {
        int n = s.size();
        int k = -1;
        for(int i=n-1;i>=0;i--){
            int x = s[i]-'0';
            if(x%2==0){
                k =i;
                break;
            }
        }

        if(k==-1) return "";
        return s.substr(0,k+1);
    }
};