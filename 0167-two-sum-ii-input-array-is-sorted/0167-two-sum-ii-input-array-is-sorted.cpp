class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int t) {
          int n = numbers.size();
         
          int i=0,j=n-1;
          while(i<j){
             int sum = numbers[i]+numbers[j];
             if(sum==t) return {i+1,j+1};
             else if(sum>t){
                j--;
             }
             else{
                i++;
             }
          }
          return {-1,-1};
    }
};