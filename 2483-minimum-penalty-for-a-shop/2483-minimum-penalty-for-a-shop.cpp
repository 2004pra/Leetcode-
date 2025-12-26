class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        int mini = INT_MAX;

        int pre=0;
        vector<int> ans(n+1,0);
        
            for(int i = 0;i<n;i++){
                ans[i+1]=ans[i];
                if(customers[i]=='N'){
                    ans[i+1]++;
                }
            }

            int suff = 0;
            for(int j=n-1;j>=0;j--){

                if(customers[j]=='Y'){
                    suff++;
                }
                ans[j]+=suff;
            }
           int besthr = 0;
            for(int i=0;i<=n;i++){
          if(ans[i]<mini){
            mini=ans[i];
            besthr = i;
          }
            }
            return besthr;

    }
};