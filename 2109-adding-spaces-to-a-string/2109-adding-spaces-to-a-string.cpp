class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
       
        int n = spaces.size();
        
        string res = "";
        int last = 0;
        for(int i=0;i<n;i++){
            if(spaces[i]==0){
                res+=' ';
                last = spaces[i];
                res+=s.substr(last,spaces[i]-last);
            }  
            else{
                int curr = spaces[i];
                res+=s.substr(last,curr-last);
                res+=' ';
                last = curr;
            }
        }
        res += s.substr(last,s.size()-last);
        return res;
    }
};