class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total_sum=0;
        for(int i:cardPoints){
            total_sum+=i;
        }
        if(k==cardPoints.size()) return total_sum;
        int window_size=cardPoints.size()-k;
        int min_window=INT_MAX;
        int sum=0;
        for(int i=0;i<window_size;i++){
            sum+=cardPoints[i];
        }
        min_window=min(min_window,sum);
        for(int i=1;i<=k;i++){
            sum=sum-cardPoints[i-1]+cardPoints[window_size-1+i];
            min_window=min(min_window,sum);
        }
        return total_sum-min_window;
    }
};