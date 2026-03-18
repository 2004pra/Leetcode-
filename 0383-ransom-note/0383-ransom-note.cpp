class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
            unordered_map<char,int> st;
            unordered_map<char,int> bt;
            
            int n = ransomNote.size();
            int m = magazine.size();

            for(int i=0;i<n;i++){
                st[ransomNote[i]]++;
            }
            for(int i=0;i<m;i++){
                bt[magazine[i]]++;
            }

            for(auto it : st){
                 if(bt.find(it.first)!=bt.end()){
                    if(bt[it.first]>=it.second){
                        continue;
                    }
                    else {
                        return false;
                    }
                 }
                 else{
                    return false;
                 }
            }
return true;
    }
};