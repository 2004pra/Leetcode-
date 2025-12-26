class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int n = word1.size();
        int m = word2.size();
        string word ="";
         for(int i=0,j=0; i<n && j<m; i++,j++){
            word+=word1[i];
            word+=word2[j];
         }

         if(n<m){
            for(int i=n;i<m;i++){
                word+=word2[i];
            }
         }
        
         if(n>m){
            for(int i=m;i<n;i++){
                word+=word1[i];
            }
         }
             return word;
    }
};