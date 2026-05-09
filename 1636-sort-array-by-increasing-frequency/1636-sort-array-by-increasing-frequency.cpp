class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i:nums) mp[i]++;

        map<int,vector<int>> np;
        for(auto it : mp) np[it.second].push_back(it.first);

        vector<int> ans;
        for(auto it :np){
            
            if(it.second.size()==1){
            int cnt = mp[it.second[0]];     
            for(int i=0;i<cnt;i++) ans.push_back(it.second[0]);
            }
            else{
                sort(it.second.begin(),it.second.end(),greater<int>());
                for(auto val : it.second){
                    int cnt = mp[val];
                    for(int i=0;i<cnt;i++) ans.push_back(val); 
                    }
            }

        }

        return ans;
    }
};