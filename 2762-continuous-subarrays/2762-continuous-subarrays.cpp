class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n = nums.size();
        int l =0;
        deque<int> maxd;
        deque<int> mind;
        long long ans =0;
        for(int r=0;r<n;r++){
   
           while(!maxd.empty() && nums[r]>maxd.back()){
            maxd.pop_back();
           }
           maxd.push_back(nums[r]);
              
           while(!mind.empty() && nums[r]<mind.back()){
            mind.pop_back();
           }
           mind.push_back(nums[r]);


           while(!maxd.empty() && !mind.empty() && 
                 maxd.front()-mind.front()>2){
                    if(maxd.front()==nums[l]){
                        maxd.pop_front();
                    }
                    if(mind.front()==nums[l]){
                        mind.pop_front();
                    }
                    l++;
                 }

                 ans+=(r-l+1);



        }
        return ans;
    }
};