class Solution {
public:
    string reorganizeString(string s) {
       
       unordered_map<char,int> mp;
       for(char c : s) mp[c]++;
       int maxi = 0;
       char a;
       for(auto it : mp){
                if(it.second>maxi){
                maxi = it.second;
                a=it.first;
                }
       }
       if(maxi > (s.size()+1)/2) { 
        return "";
       }
       string ans(s.size(),' ');
       int id = 0;

       while(mp[a]>0){
        ans[id]=a;
        id+=2;
        mp[a]--;
       }

       for(auto &it : mp){
        char ch = it.first;
        while(it.second>0){
            if(id>=s.size()){
              id=1;
            }
            ans[id]=ch;
            id+=2;
            it.second--;
        }
       }

return ans;

    }
};