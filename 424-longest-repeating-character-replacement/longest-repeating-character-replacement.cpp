class Solution {
public:
    int characterReplacement(string s, int k) {
    int low=0;
    int high=0;
    int maxWindow=0;
    int maxFreq=0;
    int windowSize=0;
    unordered_map<char,int> count;
    while(high<s.length()){
        count[s[high]]++;
        maxFreq=max(maxFreq,count[s[high]]);
        windowSize=high-low+1;
        if(windowSize-maxFreq>k){
            count[s[low]]--;
            low++;
        }
        maxWindow=max(maxWindow,high-low+1);
        high++;
    }
    return maxWindow;
    }
};