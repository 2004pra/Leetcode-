class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
    int n = words.size();
    
    unordered_map<char, int> np;

    // count freq of first word
    for(char c : words[0]){
        np[c]++;
    }

    // process remaining words
    for(int i = 1; i < n; i++){
        unordered_map<char, int> cp;

        for(char c : words[i]){
            cp[c]++;
        }

        // 🔥 main fix: take minimum
        for(auto &it : np){
            char c = it.first;
            it.second = min(it.second, cp[c]);
        }
    }

    // build answer
    vector<string> ans;
    for(auto it : np){
        char c = it.first;
        int freq = it.second;

        while(freq--){
            ans.push_back(string(1, c));
        }
    }

    return ans;
}
};