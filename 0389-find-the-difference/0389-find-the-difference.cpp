class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

          unordered_map<char,int> mp;
          unordered_map<char,int> tp;

          for(int i=0;i<s.size();i++){
            mp[s[i]]++;
          }

          
          for(int i=0;i<t.size();i++){
            tp[t[i]]++;
          }
          auto it1 = mp.begin();
          auto it2 = tp.begin(); 

 
          while(it1 != mp.end() && it2 != tp.end()){
            if(it1->second!=it2->second){
                return it1->first;
            }
            it1++;
            it2++;
          }
          return t[t.size()-1];
    }
};