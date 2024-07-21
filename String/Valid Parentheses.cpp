class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> paran = {{')', '('}, {']', '['}, {'}', '{'}};
        for(char ch:s)
        {
            if(paran.find(ch) == paran.end())
            {
                st.push(ch);
            }
            else if(!st.empty() && paran[ch] == st.top())
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        return st.empty();
    }
};