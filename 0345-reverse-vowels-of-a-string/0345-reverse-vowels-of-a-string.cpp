class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        int i=0;
        int j = n-1;
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
        while(i<j){
          if(st.find(s[i])!=st.end() && st.find(s[j])!=st.end()){
            swap(s[i],s[j]);
            i++;
            j--;
          }
          else if(st.find(s[i])==st.end()) i++;
          else if(st.find(s[j])==st.end()) j--;
        }
        return s;
    }
};