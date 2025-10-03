class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    if(nums.empty()){
        return 0;
    }
    sort(nums.begin(),nums.end());
    int max_con=1;
    int low=0,high=1;
    int len=1;
    while(high<nums.size()){
        if(nums[high]-nums[low]==0 ||
        nums[high]-nums[low]==1){
            if(nums[high]-nums[low]==0){
                len=len+0;
            }
            else{
                len++;   
            }
            max_con=max(max_con,len);
        }
        else{
            len=1;
        }
        low++;
        high++;
    }
    return max_con;
    }
};