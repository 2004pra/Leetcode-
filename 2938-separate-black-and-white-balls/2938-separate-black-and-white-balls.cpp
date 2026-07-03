class Solution {
public:
    long long minimumSteps(string s) {
        long long cnt = 0;
        int n = s.size();
        int zp = 0;
        for(int i=0;i<n;i++){
             if(s[i]=='0'){
                cnt +=(i-zp);
                zp++;
             }
        }
        return cnt;
    }
};