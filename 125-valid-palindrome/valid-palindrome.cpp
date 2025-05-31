class Solution {
public:
    bool isPalindrome(string s) {
    for(int i=0;i<s.length();i++){
        s[i]=tolower(s[i]);
    }
    string str;
    for(int i=0;i<s.length();i++){
        if(isalpha(s[i]) || isdigit(s[i])){
            str+=s[i];
        }
    }
    string res=str;
    reverse(str.begin(),str.end());
    if(res==str){
        return 1;
    }
    return 0;  























    // string s1;
    // for(int i=0;i<s.length();i++){
    //     if(isalpha(s[i])){
    //         s[i]=tolower(s[i]);
    //         s1.push_back(s[i]);
    //     }
    //     else if(isdigit(s[i])){
    //         s1.push_back(s[i]);
    //     }
    // }
    // string s2=s1;
    // reverse(s1.begin(),s1.end());
    // if(s1==s2){
    //     return 1;
    // }
    // return 0;
    }
};