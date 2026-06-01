class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        sort(cost.begin(),cost.end());
        int cnt = 0;
        int maxi = 0;
        for(int i=n-1;i>=0;i--){
            
           if(cnt==2 && cost[i]<maxi){
            cnt=0;
           }
           else{
            maxi += cost[i];
           cnt++;
           }
           
        }
        return maxi;
    }
};