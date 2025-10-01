class Solution {
public:
    int characterReplacement(string s, int k) {
        int low=0,high=0;
        int max_freq=0;
        int window_size=0;
        int max_window=0;
        unordered_map<char,int> count;
        while(high<s.size()){
            count[s[high]]++;
            window_size=high-low+1;
            max_freq=max(max_freq,count[s[high]]);
            if((window_size-max_freq)>k){
                count[s[low]]--;
                low++;
            }
            max_window=max(max_window,high-low+1);
            high++;
        }
        return max_window;
    }
};