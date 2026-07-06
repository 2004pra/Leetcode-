class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        int ans =1;
        sort(intervals.begin(),intervals.end(),[](auto &a , auto &b){
            if(a[0]==b[0]){
                return a[1]>b[1];
            }
            else return a[0]<b[0];
        });
        int maxi = intervals[0][1];
        for(int i=0;i<n;i++){
            if(intervals[i][1]<=maxi) continue;
            else{
                ans++;
                maxi=intervals[i][1];
            }
        }
        return ans;
    }
};