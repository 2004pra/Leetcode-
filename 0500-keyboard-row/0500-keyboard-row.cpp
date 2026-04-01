class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string a = "qwertyuiop";
        string b = "asdfghjkl";
        string c = "zxcvbnm";
        
         vector<string> ans;
        for(int i=0;i<words.size();i++){
            string word = words[i];
            for(auto &ch : word){
            ch = tolower(ch);
        }
            bool k = true;
            bool m = true;
            bool n = true;
              for(char ch : word){
                if(a.find(ch)==string::npos) k=false;
                if(b.find(ch)==string::npos) m=false;
                if(c.find(ch)==string::npos) n=false;

              }

              if(k || n || m){
                ans.push_back(words[i]);
              }
               
        }
        return ans;
    }
};