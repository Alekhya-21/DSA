class Solution {
public:
    int search(vector<int>& nums, int target) {
        bool flag=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
            flag=true;
        }
        if(!flag){
            return -1;
        }
        return -1;
    }
};