class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> neww(2);
    int count=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            count++;
            neww[0]=i;
            break;
        }
    }
    for(int i=nums.size()-1;i>=0;i--){
        if(nums[i]==target){
            count++;
            neww[1]=i;
            break;
        }
    }
    if(count==0 || nums.size()==0){
        neww[0]=-1;
        neww[1]=-1;
        return neww;
    }
    return neww;
    }
};