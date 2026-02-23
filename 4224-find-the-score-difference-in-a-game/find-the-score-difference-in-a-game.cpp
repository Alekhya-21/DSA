class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        bool player_1=true;
        int score_1=0,score_2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                player_1=!player_1;
            }
            if((i+1)%6==0){
                player_1=!player_1;
            }
            if(player_1) score_1+=nums[i];
            else score_2+=nums[i];
        }
        return score_1-score_2;
    }
};