class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans =n*2;
         for(int i=1;i<n*2;i++){
              if(i%2==0 && i%n==0){
                ans=i;
              }
         }
         return ans;
    }
};