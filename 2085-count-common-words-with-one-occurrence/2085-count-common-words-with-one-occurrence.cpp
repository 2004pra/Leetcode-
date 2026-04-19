class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int n = words1.size();
        int m = words2.size();

        unordered_map<string,int> mp1;
        unordered_map<string,int> mp2;

        for(string s : words1){
            mp1[s]++;
        }

        for(string s : words2){
            mp2[s]++;
        }
        int cnt =0;
        for(string s : words2){
            if((mp1.find(s)!=mp1.end()) && (mp2.find(s)!=mp1.end())){
                if(mp1[s]==1 && mp2[s]==1){
                    cnt++;
                }
            }
        }
        return cnt;

    }
};