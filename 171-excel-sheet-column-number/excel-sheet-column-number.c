int titleToNumber(char* columnTitle) {
    int l=strlen(columnTitle)-1;
    int sum=0;
    int i=0;
    while(l>=0){
        int p=pow(26,l);
        int q=columnTitle[i]-64;
        sum=sum+(p*q);
        l--;
        i++;
    }
    return(sum);
}