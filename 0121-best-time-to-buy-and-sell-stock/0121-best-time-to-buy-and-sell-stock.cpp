class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size();
        int maxi = 0;
        int cost = INT_MAX;
        for(int i=0;i<n;i++){
            cost = min(cost,p[i]);
            maxi = max(maxi,p[i]-cost);
        }
        return maxi;
    }
};