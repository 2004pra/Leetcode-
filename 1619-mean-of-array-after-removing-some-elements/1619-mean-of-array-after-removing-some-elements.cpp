class Solution {
public:
    double trimMean(vector<int>& arr) {
          sort(arr.begin(),arr.end());
           int  x = arr.size() * 5 / 100;
           int sum =0;
          
           for(int  i=x;i<arr.size()-x;i++){
            sum+=arr[i];
           }
           int cnt = arr.size()-2*x;
         double ans = sum/(double)cnt;
         return ans;
    }
};