class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n =nums.size();
        int pre = 0;
        int count =0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            pre+=(nums[i]%2);
            if(mp.find(pre-k)!=mp.end()){
                   count+=mp[pre-k];
            }
            mp[pre]++;
        }
        return count;
        
        

        
    }
};