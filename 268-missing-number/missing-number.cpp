class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int numsSize=nums.size();
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]>nums[j]){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }
    if(nums[0]!=0){
        return 0;
    }
    for(int i=1;i<numsSize;i++){
        if((nums[i]-nums[i-1])>1){
            return(nums[i-1]+1);
        }
    }
    return numsSize;
    }
};