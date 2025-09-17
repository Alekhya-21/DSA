class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    set<vector<int>> arr;
    sort(nums.begin(),nums.end());
    for(int i=0;i<=nums.size()-3;i++){
        int low=i+1;
        int high=nums.size()-1;
        while(low<high){
            int sum=nums[i]+nums[low]+nums[high];
            if(sum==0){
                arr.insert({nums[i],nums[low],nums[high]});
                low++;
                high--;
            }
            else if(sum<0){
                low++;
            }
            else{
                high--;
            }
        }
    }
    return vector<vector<int>>(arr.begin(),arr.end());
























    // if(nums.size()<3){
    //     return {};
    // }
    // set<vector<int>> arr;
    // sort(nums.begin(),nums.end());
    // for(int i=0;i<nums.size()-2;i++){
    //     int low=i+1;
    //     int high=nums.size()-1;
    //     int sum=0;
    //     while(low<high){
    //         sum=nums[i]+nums[low]+nums[high];
    //         if(sum==0){
    //             arr.insert({nums[i],nums[low],nums[high]});
    //             low++;
    //             high--;
    //         }
    //         else if(sum<0){
    //             low++;
    //         }
    //         else{
    //             high--;
    //         }
    //     }
    // }
    // return vector<vector<int>>(arr.begin(),arr.end());
    }
};