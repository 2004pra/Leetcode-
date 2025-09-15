class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
    bool newWord = true;
    int count = 0;
    int word = 1;
    int a = brokenLetters.size(); 
    int n = text.size();
     for(int i=0;i<a;i++){
        for(int j=0;j<n;j++){
           if(text[j]==brokenLetters[i] && newWord==true){
            count++;
            newWord= false;
           }
           else if(text[j] == ' '){
            newWord = true;
            word++;
           }
        }
        if(count==0){
            word = 1;
        }
     }
       
       return word-count;
    }
   
};