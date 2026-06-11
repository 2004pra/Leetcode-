class Solution {
public:
    bool queryString(string s, int n) {
        for(int i=1;i<=n;i++){
            string a = bitset<32>(i).to_string();
            a.erase(0,min(a.find('1'),a.size()-1));
            if(s.find(a)==string::npos){
                return false;
            }
        }
        return true;
    }
};