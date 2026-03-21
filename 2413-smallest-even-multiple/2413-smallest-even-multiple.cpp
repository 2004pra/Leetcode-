class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans =n*2;
        if(n%2==0) ans=n;
        else return n*2;
         return ans;
    }
};