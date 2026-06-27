class Solution {
public: 
set<vector<int>> st;
 void help(vector<int>& nums, vector<int>& combi, vector<vector<int>>& ans, int id, int t ){
               if(t<0) return;
               if(id==nums.size()) return; 
               if(t==0){
                if(st.find({combi})==st.end()){
                ans.push_back({combi});
                st.insert({combi});
                }
                return;
               }
               combi.push_back(nums[id]);
               help(nums,combi,ans,id+1,t-nums[id]);
               help(nums,combi,ans,id,t-nums[id]);
               combi.pop_back();
               help(nums,combi,ans,id+1,t);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
         vector<vector<int>> ans;
         vector<int> combi;
         int id =0;

         help(nums,combi,ans,0,target); 
         return ans;   
    }
};