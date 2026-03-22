class Solution {
public:
    int countTime(string s) {
        int hw = 0;
        int mw =0;

        if(s[0]=='?' && s[1]=='?'){
            hw =24;
        }
        else if(s[0]=='?'){
            if(s[1]<='3') hw=3;
            else hw=2;
        }
        else if(s[1]=='?'){
            if(s[0]=='2') hw=4;
            else hw=10;
        }
        else{
            int h = stoi(s.substr(0,2));
            hw = (h < 24) ? 1 : 0;
        }

        if(s[3]=='?' && s[4]=='?') mw = 60;
        else if(s[3]=='?'){
            mw=6;
        }
        else if(s[4]=='?') mw=10;
        else {
            int m = stoi(s.substr(3,2));
            mw = (m<60) ? 1 : 0;
        }
        return hw*mw;
    }
};