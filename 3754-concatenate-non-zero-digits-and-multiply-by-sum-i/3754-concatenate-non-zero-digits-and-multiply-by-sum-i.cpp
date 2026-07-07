class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        int m = s.size();
        string ans ="";
        for(int i=0;i<m;i++){
            if(s[i]!='0'){
               ans+=s[i];
            }
        }
        if(ans.size()==0) return 0;
        long long sum =0;
        for(int i=0;i<ans.size();i++){
            sum+=(ans[i]-'0');
        }
        long long res = stoll(ans);
        res*=sum;
        return res;

    }
};