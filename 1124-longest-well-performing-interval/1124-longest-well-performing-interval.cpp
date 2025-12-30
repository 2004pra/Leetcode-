class Solution {
public:
    int longestWPI(vector<int>& hours) {
        int n = hours.size();
        int sum = 0;
        map<int,int> mp;
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
             if(hours[i]>8){
                ans[i]=1;
             }
             else{
                ans[i]=-1;
             }
        }

        //
          int maxi = 0;
        for(int i =0;i<n;i++){
            sum+=ans[i];
            if(mp.find(sum)!=mp.end()){
                if(sum>0){
                    maxi = i+1;
                }
                
            }
            else{
                    mp[ans[i]]=i;
                }
           
        }
         return maxi;
    }
};