class Solution {
public:

void pS(vector<int> &nums,vector<vector<int>> &ans,vector<int> &temp, int i){
     
     if(i==nums.size()){
        ans.push_back(temp);
        return;
     }
     temp.push_back(nums[i]);
     pS(nums,ans,temp,i+1);
     temp.pop_back();
     pS(nums,ans,temp,i+1);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        pS(nums,ans,temp,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};