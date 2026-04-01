class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    
    
    unordered_map<string, int> mp;
    
    
    for (int j = 0; j < list2.size(); j++) {
        mp[list2[j]] = j;
    }

    vector<string> ans;
    int mini = INT_MAX;

    for (int i = 0; i < list1.size(); i++) {
        if (mp.count(list1[i])) {
            int sum = i + mp[list1[i]];

            if (sum < mini) {
                mini = sum;
                ans.clear(); 
                ans.push_back(list1[i]);
            }
            else if (sum == mini) {
                ans.push_back(list1[i]);
            }
        }
    }

    return ans;
    
    
    }
};