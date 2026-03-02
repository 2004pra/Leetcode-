class Solution {
public:
vector<int> ans;
    int minPartitions(string n) {

        for (int i=0;i<n.size();i++){
            int m = n[i]-'0';
            ans.push_back(m);
        }
        int maxi = INT_MIN;
        for(int i =0;i<ans.size();i++){
             if(ans[i]>maxi){
                maxi=ans[i];
             }
        }
        return maxi;
    }
};