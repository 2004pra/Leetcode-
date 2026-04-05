class Solution {
public:
    bool judgeCircle(string s) {
        int n = s.size();
        int r=0,l=0,u=0,d=0;
       
        for(char c : s){
             if(c=='R') r++;
             else if(c=='L') l++;
             else if(c=='U') u++;
             else if(c=='D') d++;
        }
    
        return (l==r && u==d);
    }
};