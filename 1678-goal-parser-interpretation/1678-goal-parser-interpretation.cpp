class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        string ans = "";
        for(int i =0;i<n;i++){
            if(command[i]=='G'){
                  ans+='G';
            }
            else if(command[i]=='(') continue;
            else if(command[i]==')'){
                if(i>0 && command[i-1]=='(') ans+='o';
                if(i>0 && command[i-1]=='l'&& command[i-2]=='a') ans+="al";
            }
            
        }
        return ans;
    }
};