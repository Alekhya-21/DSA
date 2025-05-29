class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int> alienorder;
        for(int i=0;i<order.length();i++){
            alienorder[order[i]]=i;
        }
        int low=0,high=1;
        while(high<words.size()){
            string m=words[low];
            string n=words[high];
            int i=0;
            while(i<m.length() && i<n.length()){
                if(alienorder[m[i]]<alienorder[n[i]]){
                    break;
                }
                if(alienorder[m[i]]>alienorder[n[i]]){
                    return 0;
                }
                i++;
            }
            if(i==n.length() && m.length()>n.length()){
                return 0;
            }
            low++;
            high++;
        }
        return 1;
    }
};