class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int res=0;
    sort(nums.begin(),nums.end());
    for(int i=1;i<nums.size();i++){
        if((nums[i]-nums[i-1])>1){
            res=nums[i]-1;
        }
    }
    if(res==0 && nums[0]==0){
        res=nums[nums.size()-1]+1;
    }
    if(nums[0]!=0){
        res=0;
    }
    return res;
    }
};