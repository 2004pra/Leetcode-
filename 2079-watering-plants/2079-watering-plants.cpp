class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n = plants.size();
        int c = capacity;
        int cnt =0;
        for(int i=0;i<n;i++){
             if(c>=plants[i]){
                c-=plants[i];
                cnt +=1;
             }
             else{
                c=capacity;
                c-=plants[i];
                cnt+=i + (i+1);
             }
        }
        return cnt;
    }
};