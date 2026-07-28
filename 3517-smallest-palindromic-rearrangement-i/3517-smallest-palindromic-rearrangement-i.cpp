class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        if(s.size()==1) return s;
        map<char,int> mp;
        for(char c : s) mp[c]++;
        bool odd = false;
        char oddc;
        for(auto it : mp) {
            if(it.second%2==1) {
                odd=true;
                oddc = it.first;
                break;
            }
        }
        string left = "";
        for(auto it : mp){
          for(int i=0;i<it.second/2;i++){
            left+=it.first;
          }  
        }
        cout<<left;
        string middle = "";
        if(odd){
           middle += oddc;
        }
        string right = left;
        reverse(right.begin(),right.end());
        string ans = left+middle+right;
        return ans;
    }
};