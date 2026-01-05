class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
          long long totalsum = 0;
          int absmin= INT_MAX;
          int negCount = 0;
          bool haszero = false;
        long long n = matrix.size();
          for(int i=0; i<n; i++){
            for(int j =0;j<n;j++){

                   int val = matrix[i][j];
                   totalsum+=abs(val); 
                   if(val<0){
                    negCount++;
                   }

                   absmin = min(absmin,abs(val));

                   if(val==0){
                    haszero = true;
                   }

            }
          }

          if(negCount%2==1 && !haszero){
            totalsum-=2*absmin;
          }
          return totalsum;

    }
};