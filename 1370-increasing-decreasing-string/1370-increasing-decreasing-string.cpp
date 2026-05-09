class Solution {
public:
    string sortString(string s) {
        string a = s;
        string result ="";
        int i=0;
        while(s.size()!=0){
            set<char> st(s.begin(),s.end());
            for(auto it : st){
                result+=it;
                s.erase(s.find(it),1);
            }
            set<char,greater<char>> gt(s.begin(),s.end());
            for(auto it : gt){
                result+=it;
                s.erase(s.find(it),1);
            }
           
        }


        return result;
    }
};