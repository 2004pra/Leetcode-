class Solution {
public:
    bool isValidSerialization(string preorder) {

       vector<string> v;
       stringstream ss(preorder);
       string node="";
       while(getline(ss,node,',')) {
            v.push_back(node);
        
       } 
        int slot =1;
        for(auto c : v){
            slot--;

            if(slot<0) return false;

            if(c!="#") slot+=2;
        }

        return slot==0;
    }
};