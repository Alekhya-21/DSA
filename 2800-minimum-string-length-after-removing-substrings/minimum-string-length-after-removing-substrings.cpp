class Solution {
public:
    int minLength(string s) {
    string str;
    for(int i=0;i<s.length();i++){
        if(!str.empty() && (
            (s[i]=='B' && str.back()=='A') ||
            (s[i]=='D' && str.back()=='C'))){
                str.pop_back();
            }
        else{
            str.push_back(s[i]);
        }
    }
    return str.length();
    }
};