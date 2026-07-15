class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int  a =0;
        int  b =0;
        int i=1;
        int ec =0;
        int oc =0;
        while(ec <n && oc<n){
          if(i%2==0) {
            a+=i;
            ec++;
          }
          else {
            b+=i;
            oc++;
          }
          i++;
        }
        return gcd(a,b);
    }
};