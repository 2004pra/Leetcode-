class Solution {
public:
    int mirrorDistance(int n) {
        int n2 = n;
        int n3 =0;
        int rem =0;
        while(n2!=0){
            rem = n2 %10;
            n3 = n3 *10 + rem;
            n2 = n2 /10; 
        }
        return abs(n-n3);
    }
};