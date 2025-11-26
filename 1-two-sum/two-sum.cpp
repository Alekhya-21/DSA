class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr;
        int left,right;
        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        int low=0;
        int high=nums.size()-1;
        while(low<high){
            int sum=arr[low].first+arr[high].first;
            if(sum==target){
                left=arr[low].second;
                right=arr[high].second;
                return {left,right};
            }
            else if(sum>target){
                high--;
            }
            else{
                low++;
            }
        }
        return {left,right};
    }
};