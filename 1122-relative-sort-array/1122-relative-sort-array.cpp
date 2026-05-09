class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> mp;
        set<int> st(arr1.begin(),arr1.end());
        set<int> gt(arr2.begin(),arr2.end());
        for(int i : arr1) mp[i]++; 
        vector<int> ans;
        for(int i : arr2){
            if(mp.find(i)!=mp.end()){
                int cnt = mp[i];
                for(int j=0;j<cnt;j++) ans.push_back(i);
            }
        }
        for(auto it : st){
            if(gt.find(it)==gt.end()){
                int cnt = mp[it];
                for(int i=0;i<cnt;i++) ans.push_back(it);
            }
        }
        return ans;
    }
};