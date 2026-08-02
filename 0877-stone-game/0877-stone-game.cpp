class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n = piles.size();
        int i=n-2;
        int ans = 0;
        int j =0;
        while(j<n/3){
           ans+=piles[i];
           i-=2;
           j++;
        }
        return ans;
    }
};