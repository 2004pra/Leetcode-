class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string a = to_string(low);
        string b = to_string(high);
        vector<int> ans;
        string s ="";
        for (int i = 1; i <= a.size(); i++) {
            s += to_string(i);
        }
        int r = 0;
        r = stoi(s);
        if(r<=high && r>=low) ans.push_back(stoi(s));
        while (r <= high) {
            int len = s.size();
            if (s.back() == '9') {
                if(len==9) break;
                s = "";
                for (int i = 1; i <= len + 1; i++) {

                    s += char('0' + i);
                    
                }
            } else {
                char c = s.back() + 1;
                s = s.substr(1, s.size() - 1);
                s += c;
            }
            r = stoi(s);
            if (r <= high && r>=low)
                ans.push_back(r);
        }

        return ans;
    }
};