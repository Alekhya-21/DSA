class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0;
        int high=0;
        int sum=0;
        int min_len=INT_MAX;
        bool flag=false;
        while(high<nums.size()){
            sum=sum+nums[high];
            while(sum>=target){
                int curr_len=high-low+1;
                min_len=min(min_len,curr_len);
                sum=sum-nums[low];
                low++;
                flag=true;
            }
            high++;
        }
        if(!flag) return 0;
        return min_len;
    }
};