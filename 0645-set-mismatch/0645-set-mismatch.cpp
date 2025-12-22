class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
           int n = nums.size();
        vector<int> ans;
        vector<int> freq (n+1,0);
        int dup = -1;
        int miss = -1;

        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }

        for(int i =1;i<=n;i++){
            if(freq[i]==2 ){
                dup = i;
            }
            if(freq[i]==0){
                miss = i;
            }
            
        }
        ans.push_back(dup);
        ans.push_back(miss);
        return ans;
    }
};