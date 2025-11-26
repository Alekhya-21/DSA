class Solution {
public:
    string longestPalindrome(string s) {
        string res="";
        for(int i=0;i<s.size();i++){
            int low=i;
            int high=i;
            while(low>=0 && high<s.size() && s[low]==s[high]){
                low--;
                high++;
            }
            string temp=s.substr(low+1,high-low-1);
            if(temp.size()>res.size()){
                res=temp;
            }
            low=i;
            high=i+1;
            while(low>=0 && high<s.size() && s[low]==s[high]){
                low--;
                high++;
            }
            temp=s.substr(low+1,high-low-1);
            if(temp.size()>res.size()){
                res=temp;
            }
        }
        return res;
    }
};