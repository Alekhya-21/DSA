class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int largest=nums[nums.size()-1];
        if(nums[0]!=0)return 0;
        int res=0;
        for(int i=1;i<nums.size();i++){
            res=res^nums[i];
        }
        for(int i=0;i<=largest;i++){
            res=res^i;
        }
        if(res==0)return largest+1;
        return res;
    }
};