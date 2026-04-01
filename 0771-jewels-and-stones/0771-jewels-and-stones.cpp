class Solution {
public:
    int numJewelsInStones(string j, string stones) {
        int n = stones.size();
        int cnt =0;
        for(int i=0;i<n;i++){
            if(j.find(stones[i])!=string::npos){
                cnt++;
            }
        }
        return cnt;
    }
};