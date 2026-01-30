class Solution {
public:
   
    int calPoints(vector<string>& operations) {
    vector<int> ans;

    for (auto &op : operations) {
        if (op == "+") {
            int last = ans.back();
            int secondLast = ans[ans.size() - 2];
            ans.push_back(last + secondLast);
        } 
        else if (op == "D") {
            ans.push_back(2 * ans.back());
        } 
        else if (op == "C") {
            ans.pop_back();
        } 
        else {
            ans.push_back(stoi(op));
        }
    }

    // Sum all points
    int sum = 0;
    for (int x : ans) sum += x;
    return sum;
}

};