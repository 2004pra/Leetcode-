class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even, odd;
int n = nums.size();
for(int x : nums){
    if(x % 2 == 0) even.push_back(x);
    else odd.push_back(x);
}

vector<int> ans(n);
int e = 0, o = 0;

for(int i = 0; i < n; i++){
    if(i % 2 == 0){
        ans[i] = even[e++];
    } else {
        ans[i] = odd[o++];
    }
}
return ans;
    }
};