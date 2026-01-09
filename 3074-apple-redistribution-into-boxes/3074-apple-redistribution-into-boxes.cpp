class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int maxsum = accumulate(apple.begin(),apple.end(),0);
        int arrsum = accumulate(apple.begin(),apple.end(),0);
        int n = capacity.size();
        sort(capacity.begin(),capacity.end());
        int count = 0;
        for(int i =n-1;i>=0;i--){
                 if(capacity[i]>= maxsum){
                    return 1;
                 }
                 arrsum-=capacity[i];
                 count++;
                 if(arrsum <= 0){
                    return count;
                 }
        }
        return -1;
    }
};