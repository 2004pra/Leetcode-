class Solution {
public:
    int bitwiseComplement(int n) {
         bitset<32> binary(n);
         string s = binary.to_string();
         int pos = s.find('1');
         for(int i=pos;i<s.size();i++){
            if(s[i]=='0'){
                s[i]='1';
            }
            else{
                s[i]='0';
            }
         }  
         
        int ans = stoi(s,0,2);
        if(n==0) return 1;
        return ans;

            }
};