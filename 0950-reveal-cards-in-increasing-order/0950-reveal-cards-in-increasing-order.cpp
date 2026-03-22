class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
           deque<int> q;
           sort(deck.begin(),deck.end());
           for(int i=deck.size()-1;i>=0;i--){
            if(!q.empty()){
                int n = q.back();
                q.pop_back();
                q.push_front(n);
            }
            q.push_front(deck[i]);
           }

           vector<int> v;
           while(!q.empty()){
              v.push_back(q.front());
              q.pop_front();
           }
           return v;
    }
};