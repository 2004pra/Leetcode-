class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int n = words.size();
        vector<string> v = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};


   

   
   vector<string> ans;
   for(int i=0;i<n;i++){
       string s ="";
       for(int j=0;j<words[i].size();j++){
        int x = words[i][j]-'a';
         s+=v[x];
       }
       ans.push_back(s);
   }
   set<string> st(ans.begin(),ans.end());
   return st.size();
}
       
};