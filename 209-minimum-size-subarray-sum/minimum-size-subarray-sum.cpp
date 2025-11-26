class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int right=0;
        int window_size=0;
        int min_window=INT_MAX;
        int sum=0;
        bool flag=false;
        while(right<nums.size()){
            sum+=nums[right];
            while(sum>=target){
                window_size=right-left+1;
                min_window=min(min_window,window_size);
                sum-=nums[left];
                left++;
                flag=true;
            }
            right++;
        }
        if(!flag) return 0;
        return min_window;
    }
};