class Solution {
public:

 void helper(vector<int>& candidates,int start,int target,vector<int>& path,vector<vector<int>>& combi){
    if(target==0){
        combi.push_back({path});
        return;
    }
  int n = candidates.size();
    for(int i =start;i<n;i++){
              
          if(candidates[i]>target){
            continue;
          }
          path.push_back(candidates[i]);
          helper(candidates,i,target-candidates[i],path,combi);
          path.pop_back();

    }
 }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> combi;
        vector<int> path;
        helper(candidates,0,target,path,combi);
        return combi;
        
    }
};