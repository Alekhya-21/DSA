class Solution {
public:
    int characterReplacement(string s, int k) {
        int curr_window=0;
        int window_size=0;
        int max_window=INT_MIN;
        int max_frequency=INT_MIN;
        map<int,int> mp;
        int high=0;
        int low=0;
        while(high<s.size()){
            mp[s[high]]++;
            max_frequency=max(max_frequency,mp[s[high]]);
            curr_window=high-low+1;
            while(curr_window-max_frequency>k){
                mp[s[low]]--;
                low++;
                curr_window=high-low+1;
            }
            max_window=max(max_window,curr_window);
            high++;
        }
        return max_window;
    }
};