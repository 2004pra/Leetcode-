class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int max1=0;
        int max2=0;
        for(int i =0; i<n-1; i++){
                    for(int j=1;j<n;j++){
                        if(i!=j){
                           max1=(nums[i]-1)*(nums[j]-1);  
                          max2=max(max1,max2);
                        } 
                    }
                    
        }
        return max2;
    }
};