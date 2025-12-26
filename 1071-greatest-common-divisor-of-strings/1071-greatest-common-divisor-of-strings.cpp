class Solution {
public:
   string gcdOfStrings(string str1, string str2) {
    string result = "";
    string x = "";
    int n = min(str1.size(), str2.size());

   
    for(int i=0; i<n; i++){
        if(str1[i] == str2[i]){
            x += str1[i];
        }
        else{
            break;
        }
    }
    if (x.empty()) return "";

    for(int len = x.size(); len >= 1; len--){
        if(x.size() % len != 0) continue; 

        string candidate = x.substr(0, len);

        
        if (str1.size() % candidate.size() != 0) continue;
        string y = "";
        int o = str1.size()/candidate.size(); 
        for(int i = 0; i<o; i++){
            y += candidate;
        }
        if(y != str1) continue;

       
        if (str2.size() % candidate.size() != 0) continue;
        string z = "";
        int m = str2.size()/candidate.size();
        for(int i=0; i<m; i++){
            z += candidate;
        }
        if(z != str2) continue;

        return candidate; 
    }

    return ""; 
}

};