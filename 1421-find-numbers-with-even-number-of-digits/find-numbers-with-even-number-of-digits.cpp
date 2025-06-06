class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            while(nums[i]>0){
                int r=nums[i]%10;
                sum++;
                nums[i]=nums[i]/10;
            }
            if(sum%2==0){
                count++;
            }
        }
        return count;
    }
};