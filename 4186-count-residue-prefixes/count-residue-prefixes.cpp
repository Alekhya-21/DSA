class Solution {
public:
    int residuePrefixes(string s) {
    set<char> str;
    string res;
    int count=0;
    for(int i=0;i<s.size();i++){
        res+=s[i];
        str.insert(s[i]);
        if(str.size()==(res.size()%3)) count++;
    }
    return count;
    }
};