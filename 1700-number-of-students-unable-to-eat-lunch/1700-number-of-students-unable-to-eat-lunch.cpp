class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(int i=0;i<students.size();i++){
            q.push(students[i]);
        }

        int count = 0;
         int i=0;
        while(!q.empty() && count < q.size()){
            if(q.front()==sandwiches[i]){
                q.pop();
                i++;
                count=0;
            }
            else{
               int x = q.front();
               q.pop();
               q.push(x);
               count++;
            }
        }
        return q.size();
    }
};