bool judgeCircle(char* moves) {
int count=0;
    for(int i=0;i<strlen(moves);i++){
        if(moves[i]=='U'){
            count+=1;
        }
        if(moves[i]=='D'){
            count-=1;
        }
        if(moves[i]=='L'){
            count+=4;
        }
        if(moves[i]=='R'){
            count-=4;
        }
    }
    if(count==0){
        return 1;
    }
    else{
        return 0;
    }    
}