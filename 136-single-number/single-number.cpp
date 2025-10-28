class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int i=0;
        // while(i<nums.size()){
        //     if(count(nums.begin(),nums.end(),nums[i])==1){
        //         return nums[i];
        //     }
        //     i++;
        // }
        // return -1;

    // using bitwise
    int res=nums[0];
    for(int i=1;i<nums.size();i++){
        res=res^nums[i];
    }
    return res;
    }
};