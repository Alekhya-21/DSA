class Solution {
public:
    bool detectCapitalUse(string word) {
    int count=0;
    for(int i:word){
        if(iswlower(i)){
            count++;
        }
    }
    if(count==word.size()-1 && iswupper(word[0])){
        return 1;
    }
    if(count==word.size() || count==0){
        return 1;
    }
    return 0;
    }
};