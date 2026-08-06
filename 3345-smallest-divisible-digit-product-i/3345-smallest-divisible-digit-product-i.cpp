class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans = 0;
        for(int st=n;st<=100;st++){
            int x = st;
            int prod = 1;
              while(x!=0){
                int rem = x%10;
                prod *=rem;
                x/=10;
              }
            if(prod%t==0){
                return st;
            }
        }
        return -1;
    }
};