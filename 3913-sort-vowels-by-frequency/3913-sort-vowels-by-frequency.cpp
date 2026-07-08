class Solution {
public:
    string sortVowels(string s) {
        int n = s.size();
        unordered_map<char,int> mp;
        unordered_map<char,int> np;
        vector<pair<char,int>> cnt;
        for(int i=0;i<n;i++){
            char c = s[i];
            if(c=='a' || c=='e' || c=='i'|| c=='o'|| c=='u'){
                mp[c]++;
                if(!np.count(c)){
                np[c]=(i);
                }
            }
        }
        for(auto it : mp){
            cnt.push_back({it.first,it.second});
        }
        sort(cnt.begin(),cnt.end(),[&](pair<char,int> a, pair<char,int> b){
            if(a.second==b.second) {
                return np[a.first]<np[b.first];
            }
           return a.second>b.second;
        });
        queue<pair<char,int>> q;
        for(int i=0;i<cnt.size();i++) {
            q.push({cnt[i].first,cnt[i].second});
        }
        string ans = "";
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                char x = q.front().first;
                ans+=x;
                mp[x]--;
                if(mp[x]==0) {
                    q.pop();
                }
            }
            else{
                ans+=s[i];
            }
        }
       return ans;
    }
};