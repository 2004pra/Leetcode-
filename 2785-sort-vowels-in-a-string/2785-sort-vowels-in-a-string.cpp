class Solution {
public:
    string sortVowels(string s) {
        set<char> st;
        st.insert('A');
         st.insert('E');
          st.insert('I');
           st.insert('O');
            st.insert('U');
             st.insert('a');
              st.insert('e');
               st.insert('i');
                st.insert('o');
                 st.insert('u');


             vector<char> temp;
             for(char c: s){
                if(st.find(c)!=st.end()){
                    temp.push_back(c);
                    
            }
             }

             sort(temp.begin(),temp.end());
              int idx =0;
              string n = s;
             for(int  i=0;i<n.size();i++){
                if(st.find(n[i])!=st.end()){
                    s[i]=temp[idx++];

                }
               
             } 
      return s;
                  
    }
};