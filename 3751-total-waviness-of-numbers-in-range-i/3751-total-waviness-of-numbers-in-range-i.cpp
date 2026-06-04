class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int cnt =0;
        for(int i=num1;i<=num2;i++){
            int x = i;
            vector<int> v;
            while(x!=0){
               int rem = x % 10;
               v.push_back(rem);
               x/=10;
            }
            
            if(v.size()>=3){
                reverse(v.begin(),v.end());
                for(int i=1;i<v.size()-1;i++){
                    if((v[i]>v[i+1] && v[i]>v[i-1]) || (v[i]<v[i-1] && v[i]<v[i+1])){
                        cnt++;
                    }
                }
            }

        }
        return cnt;
    }
};