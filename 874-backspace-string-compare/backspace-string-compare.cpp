class Solution {
public:
    bool backspaceCompare(string s, string t) {
    string str1;
    string str2;

    for(int i=0;i<s.length();i++){
        if(!str1.empty() && s[i]=='#'){
            str1.pop_back();
        }
        else{
            if(s[i]=='#'){
                continue;
            }
            else{
                str1.push_back(s[i]);
            }
        }
    }
    for(int i=0;i<t.length();i++){
        if(!str2.empty() && t[i]=='#'){
            str2.pop_back();
        }
        else{
            if(t[i]=='#'){
                continue;
            }
            else{
                str2.push_back(t[i]);
            }
        }
    }
    return (str1==str2);
    }
};