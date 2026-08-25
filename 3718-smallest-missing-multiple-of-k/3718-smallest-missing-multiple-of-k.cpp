class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        bool ok = true;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==k) {
                ok = false;
                break;
            }
        }
        if(ok) return k;
        int ans = 0;
        set<int> st(nums.begin(),nums.end());
        for(int i=k;i<=200;i+=k){
            if(st.find(i)==st.end()){
             return i;
            }
            
        }
        return -1;
    }
};