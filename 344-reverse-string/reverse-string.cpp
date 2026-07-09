class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
        }
        string res="";
        while(!st.empty()){
            char c=st.top();
            res+=c;
            st.pop();
        }
    for(int i=0;i<s.size();i++){
        s[i]=res[i];
    }
    }
};