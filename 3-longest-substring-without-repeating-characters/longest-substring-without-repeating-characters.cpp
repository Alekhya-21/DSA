class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    string res="";
    for(int i=0;i<s.length();i++){
        int low=i;
        int high=i;
        set<char> visited;
        while(high<s.length() &&
        visited.find(s[high])==visited.end()){
            visited.insert(s[high]);
            high++;
        }
        string temp=s.substr(low,high-low);
        if(temp.length()>res.length()){
            res=temp;
        }
    }
    return res.length();
    }
};