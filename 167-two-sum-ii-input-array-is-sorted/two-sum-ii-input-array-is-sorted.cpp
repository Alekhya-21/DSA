class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    int low=0;
    int high=numbers.size()-1;
    while(low<high){
        int sum=numbers[low]+numbers[high];
        if(sum==target){
            return {low+1,high+1};
        }
        else if(sum>target){
            high--;
        }
        else{
            low++;
        }
    }
    return {};


















    // int low=0,high=numbers.size()-1;
    // int num1=0,num2=0;
    // while(low<high){
    //     int sum=numbers[low]+numbers[high];
    //     if(sum==target){
    //         num1=numbers[low];
    //         num2=numbers[high];
    //         break;
    //     }
    //     else if(sum>target){
    //         high--;
    //     }
    //     else{
    //         low++;
    //     }
    // }
    // int left=-1,right=-1;
    // for(int i=0;i<numbers.size();i++){
    //     if(numbers[i]==num1 && left==-1){
    //         left=i+1;
    //         i++;
    //     }
    //     if(numbers[i]==num2 && right==-1){
    //         right=i+1;
    //     }
    // }
    // return {left,right};
    }
};