class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        std::ranges::sort(score,std::greater{},[k](const auto& student_scores){
            return student_scores[k];
        });
        return score;
    }
};