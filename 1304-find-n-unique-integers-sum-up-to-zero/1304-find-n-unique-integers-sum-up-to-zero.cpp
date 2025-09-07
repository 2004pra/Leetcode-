class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> s;
        int sum=0;
        for(int i=1;i<=n-1;i++){
              s.push_back(i);
              sum=sum+i;
        }
        s.push_back(-sum);
        return s;


    }
};