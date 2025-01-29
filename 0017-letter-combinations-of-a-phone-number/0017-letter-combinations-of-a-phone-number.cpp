class Solution {
public:
    vector<string> letterCombinations(string digits) {
         if (digits.empty()) return {};  // Return empty if no input

        // Mapping of digits to corresponding letters
        unordered_map<char, string> phoneMap = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
        };

        vector<string> result;
        string current;
        backtrack(digits, 0, phoneMap, current, result);
        return result;
    }
    private:
    void backtrack(const string &digits, int index, unordered_map<char, string> &phoneMap, 
                   string &current, vector<string> &result) {
        // Base case: if we reach the end of the digits, add to result
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }

        // Get the corresponding letters for the current digit
        string letters = phoneMap[digits[index]];
        for (char letter : letters) {
            current.push_back(letter);        // Choose
            backtrack(digits, index + 1, phoneMap, current, result); // Explore
            current.pop_back();               // Unchoose (Backtrack)
        }
    }
};