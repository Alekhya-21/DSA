class Solution {
    vector<vector<string>> res;
    void recur(vector<bool>& vis,vector<string>& currArr,
    vector<string>& words){
        if(currArr.size()==4){
            string top=currArr[0];
            string left=currArr[1];
            string right=currArr[2];
            string bottom=currArr[3];
            if(top[0] == left[0] && 
               top[3] == right[0] &&
               bottom[0] == left[3] &&
               bottom[3] == right[3]){
                   res.push_back(currArr);
            }
            return;
        }
    for(int i=0;i<words.size();i++){
        if(!vis[i]){
            vis[i]=true;
            currArr.push_back(words[i]);
            recur(vis,currArr,words);
            vis[i]=false;
            currArr.pop_back();
        }
    }
}
public:
    vector<vector<string>> wordSquares(vector<string>& words) {
        vector<bool> vis(words.size(),false);
        vector<string> currArr;
        recur(vis,currArr,words);
        sort(res.begin(),res.end());
        return res;
    }
};