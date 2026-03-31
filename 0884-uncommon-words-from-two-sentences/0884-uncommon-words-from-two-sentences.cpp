class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
          vector<string> v1;
          vector<string> v2;
          stringstream ss(s1);
          string word;
          while(ss>>word){
            v1.push_back(word);
          }
          stringstream aa(s2);
          string cord;
          while(aa>>cord){
            v2.push_back(cord);
          }
          unordered_map<string,int> mp1;
          unordered_map<string,int> mp2;
          for(int i=0;i<v1.size();i++){
            mp1[v1[i]]++;
          }
          for(int i=0;i<v2.size();i++){
            mp2[v2[i]]++;
          }
           vector<string> ans;   
          for(auto it : mp1){
            if(it.second==1){
                if(mp2.find(it.first)==mp2.end()){
                    ans.push_back(it.first);
                }
            }
          }
          for(auto it : mp2){
            if(it.second==1){
                if(mp1.find(it.first)==mp1.end()){
                    ans.push_back(it.first);
                }
            }
          }
          
            
          return ans;
          
    }
};