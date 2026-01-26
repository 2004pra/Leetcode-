class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        int mini = INT_MAX;
        int i =0; 
        int j = 1;
        while(i<n && j<n){
            int diff = abs(arr[j]-arr[i]);
            if(diff<=mini){
                mini = diff;
                ans.push_back({arr[i],arr[j]});
            }
            i++;
            j++;
        }
    return ans;
    }
};