class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low=0;
        int high=numbers.size()-1;
        int left,right;
        while(low<high){
            int sum=numbers[low]+numbers[high];
            if(sum==target){
                left=low+1;
                right=high+1;
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