class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            if(count(nums.begin(),nums.end(),nums[i])==1){
                return nums[i];
            }
            i++;
        }
        return -1;
    }
};