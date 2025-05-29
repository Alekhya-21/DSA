class Solution {
public:
    bool isValid(string s) {
        string str;
        for (int i = 0; i < s.length(); i++) {
            if (!str.empty() && 
                ((s[i] == ')' && str.back() == '(') ||
                 (s[i] == ']' && str.back() == '[') ||
                 (s[i] == '}' && str.back() == '{'))) {
                str.pop_back();
            } else {
                str.push_back(s[i]);
            }
        }
        return str.empty();
    }
};