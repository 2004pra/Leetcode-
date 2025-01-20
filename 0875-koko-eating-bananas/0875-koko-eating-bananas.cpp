class Solution {
public:
     int findmax(vector<int> &piles ){
        int maxi = INT_MIN;
        int n = piles.size();
        for(int i =0;i<n;i++){
            maxi = max(maxi,piles[i]);
        }
        return maxi;
     }
     long long totalhours(vector<int> &piles,int hourly){
        long long  totalh = 0;
        int n = piles.size();
        for(int i =0;i<n;i++){
             totalh += (piles[i] + hourly - 1) / hourly;

        }
        return totalh;
     }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = findmax(piles);
        while(low<=high){
            int mid = (low + high ) /2 ;
           long long  totalh = totalhours(piles,mid);
            if(totalh<=h){
                high = mid -1;

            }
            else{
                low = mid +1;
            }
        }
        return low;
    }
};