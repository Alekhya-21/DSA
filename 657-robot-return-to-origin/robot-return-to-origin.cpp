class Solution {
public:
    bool judgeCircle(string moves) {
        int count=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='U'){
                count+=-1;
            }
            else if(moves[i]=='D'){
                count+=1;
            }
            else if(moves[i]=='L'){
                count+=-5;
            }
            else{
                count+=5;
            }
        }
        return (count==0);
    }
};