class Solution {
public:
    string reverseWords(string s) {
    vector<string> ll;
    string temp;
    // iterating through the string, a temporary string created
    // appending the temp to list if a space is encountered
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            temp+=s[i];
        }
        if(s[i]==' ' && temp.size()>0){
            ll.push_back(temp);
            temp="";
        }
    }
    if(temp.length()>0){
        ll.push_back(temp);
    }
    reverse(ll.begin(),ll.end());
    string res;
    for(string i:ll){
        res+=i;
        res+=' ';
    }
    string result=res.substr(0,res.length()-1);
    return result;
    }
};