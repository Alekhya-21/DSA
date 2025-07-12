class Solution {
public:
    string longestPalindrome(string s) {
    string palindrome="";
    for(int i=0;i<s.length();i++){
        int low=i;
        int high=i;
        while(low>=0 && high<s.length() && s[low]==s[high]){
            low--;
            high++;
        }
        string str=s.substr(low+1,high-low-1);
        if(str.length()>palindrome.length()){
            palindrome=str;
        }
        low=i-1;
        high=i;
        while(low>=0 && high<s.length() && s[low]==s[high]){
            low--;
            high++;
        }
        str=s.substr(low+1,high-low-1);
        if(str.length()>palindrome.length()){
            palindrome=str;
        }
    }
    return palindrome;

























        // if(s.length()<=0){
        //     return s;
        // }
        // // creating an empty string which stores the result string
        // string res="";
        // // we are applying Expand around center logic
        // // consider odd length
        // for(int i=0;i<s.length();i++){
        //     int low=i;
        //     int high=i;
        //     // expanding to the left and right from center
        //     while(low>=0 && high<s.length() && s[low]==s[high]){
        //         low--;
        //         high++;
        //     }
        //     // try to replace the longest palindrome substring
        //     string palindrome=s.substr(low+1,high-low-1);
        //     if(palindrome.length()>res.length()){
        //         res=palindrome;
        //     }
        //     // consider even length
        //     low=i-1;
        //     high=i;
        //     while(low>=0 && high<s.length() && s[low]==s[high]){
        //         low--;
        //         high++;
        //     }
        //     palindrome=s.substr(low+1,high-low-1);
        //     if(palindrome.length()>res.length()){
        //         res=palindrome;
        //     }
        // }
        // return res;
    }
};