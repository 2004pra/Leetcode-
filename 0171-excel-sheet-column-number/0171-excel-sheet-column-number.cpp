class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long col =0;
        for(char c : columnTitle){
            col = col * 26 + (c - 'A' + 1);
        }
        return col;
    }
};