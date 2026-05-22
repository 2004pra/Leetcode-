class Solution {
public:
    bool checkIfPangram(string s) {
        string a = "abcdefghijklmnopqrstuvwxyz";
        for(char c : a){
            if(s.find(c)==string::npos) return false;
        }
        return true;
    }
};