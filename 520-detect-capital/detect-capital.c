bool detectCapitalUse(char* word) {
    int countupper=0;
    int countlower=0;
    for(int i=0;i<strlen(word);i++){
        if(isupper(word[i])){
            countupper++;
        }
        else{
            countlower++;
        }
    }
    if(countupper==strlen(word)){
        return 1;
    }
    if(countlower==strlen(word)){
        return 1;
    }
    int c=0;
    if(isupper(word[0])){
        for(int i=1;i<strlen(word);i++){
            if(islower(word[i])){
                c++;
            }
        }
        if(c==strlen(word)-1){
            return 1;
        }
    }
    return 0;
}