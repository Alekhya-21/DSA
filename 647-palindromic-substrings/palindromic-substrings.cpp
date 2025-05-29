class Solution {
public:
    int countSubstrings(string s) {
        int count=0;
        // consider odd length
        for(int i=0;i<s.length();i++){
            int low=i;
            int high=i;
            while(low>=0 && high<s.length() && s[low]==s[high]){
                count++;
                low--;
                high++;
            }
            string palindrome=s.substr(low+1,high-low-1);
            // consider even length
            low=i-1;
            high=i;
            while(low>=0 && high<s.length() && s[low]==s[high]){
                count++;
                low--;
                high++;
            }
            palindrome=s.substr(low+1,high-low-1);
        }
        return count;
    }
};