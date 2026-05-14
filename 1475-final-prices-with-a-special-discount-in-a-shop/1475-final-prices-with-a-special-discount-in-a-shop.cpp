class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        int n = p.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            bool a = false;
            for(int j=i+1;j<n;j++){
                if(p[j]<=p[i]){
                    ans.push_back(p[i]-p[j]);
                    a=true;
                    break;
                }
            }
            if(!a) ans.push_back(p[i]);
        }
        return ans;
    }
};