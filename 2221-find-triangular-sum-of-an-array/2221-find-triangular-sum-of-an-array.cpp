class Solution {
public:
    int triangularSum(vector<int>& nums) {
       vector<int> temp= nums;
        cout<<temp[0];
        int n = nums.size();
        while(n!=1){
            vector<int> extra;
           for(int i=0;i<temp.size()-1;i++){
               extra.push_back((temp[i]+temp[i+1])%10);
           }
           temp = extra;
           n--;
        }
        return temp[0];
    }
};