class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size();
        int cost = INT_MAX;
        int maxi = 0;
        for(int i=0;i<n;i++){
            cost = min(cost,p[i]);
            maxi = max(maxi, p[i]-cost);
        }
        return maxi;
    }
};