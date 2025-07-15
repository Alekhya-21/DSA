class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    string str="";
    for(int i=0;i<s.length();i++){
        int low=i;
        int high=i;
        set<char> visited;
        while(high<s.length() && visited.find(s[high])==visited.end()){
            visited.insert(s[high]);
            high++;
        }
        string substring=s.substr(low,high-low);
        if(substring.length()>str.length()){
            str=substring;
        }
    }
    return str.length();
    }
};