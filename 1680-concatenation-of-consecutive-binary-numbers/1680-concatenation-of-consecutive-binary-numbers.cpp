class Solution {
public:
    int concatenatedBinary(int n) {
       
       const long long mod = 1000000007;
        long long ans=0;
        for(int i=1;i<=n;i++){
            bitset<32> binary(i);
            string x = binary.to_string();
            x=x.substr(x.find('1'));
            
             for(char c : x) {
            ans = (ans * 2 + (c - '0')) % mod;
        }
        }
        return ans;
    }
};