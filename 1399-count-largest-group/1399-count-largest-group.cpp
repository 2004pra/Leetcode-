class Solution {
public:
    int countLargestGroup(int n) {
       unordered_map<int,vector<int>> mp;
       for(int i=1;i<=n;i++){
        int digit =i;
        int sum =0;
        while(digit!=0){
           int k = digit%10;
           sum+=k;
           digit=digit/10;
        }
    
            mp[sum].push_back(i);
           
     }
     vector<int> ans;
     for(auto it:mp) ans.push_back(it.second.size());
     sort(ans.begin(),ans.end(),greater<int>());
     int cnt=1;
     for(int i=1;i<ans.size();i++){
       if(ans[i]!=ans[i-1]) break;
       cnt++;
     } 
     return cnt;  
    }
};