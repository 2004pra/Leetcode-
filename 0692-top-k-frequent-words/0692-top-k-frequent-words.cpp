class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n = words.size();
        unordered_map<string,int> mp;
        for(int i =0;i<n;i++){
            mp[words[i]]++;
        }
        map<int,vector<string>> np;
        for(auto it : mp){
            np[it.second].push_back(it.first);
        }
        for(auto &[freq,vec]:np){
            sort(vec.begin(),vec.end());
        }
    
        vector<string> ans;
        int cnt = 0;
        for(auto it=np.rbegin();it!=np.rend();it++){
            
            
                for(string &word : it->second){

        ans.push_back(word);

        if(ans.size() == k)
            return ans;
    }
            
        }
        
        return ans;

    }
};