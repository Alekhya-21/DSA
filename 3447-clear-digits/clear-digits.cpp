class Solution {
public:
    string clearDigits(string s) {
    string str;
    for(int i=0;i<s.length();i++){
        if(!str.empty() && 
            (isdigit(s[i]) && isalpha(str.back()))){
                str.pop_back();
            }
        else{
            str.push_back(s[i]);
        }
    }
    return str;
    }
};