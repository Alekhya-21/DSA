class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        bool flag=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=target){
                return i;
                flag=true;
            }
        }
        if(flag==false){
            return nums.size();
        }
        return -1;
    }
};