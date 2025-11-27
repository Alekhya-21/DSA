// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//     string res="";
//     for(int i=0;i<s.length();i++){
//         int low=i;
//         int high=i;
//         set<char> visited;
//         while(high<s.length() &&
//         visited.find(s[high])==visited.end()){
//             visited.insert(s[high]);
//             high++;
//         }
//         string temp=s.substr(low,high-low);
//         if(temp.length()>res.length()){
//             res=temp;
//         }
//     }
//     return res.length();
//     }
// };

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int max_len=0;
    for(int i=0;i<s.size();i++){
        set<char> visited;
        int j=i;
        while(j<s.size() && visited.find(s[j])==visited.end()){
            visited.insert(s[j]);
            j++;
        }
        if(visited.size()>max_len){
            max_len=visited.size();
        }
    }
    return max_len;
    }
};











