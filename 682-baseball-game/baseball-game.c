int calPoints(char** operations, int operationsSize) {
    int stack[1000];
    int top=-1;
    int count=0;
    int sum=0;
    for(int i=0;i<operationsSize;i++){
        if(isdigit(operations[i][0]) || operations[i][0]=='-'){
            stack[++top]=atoi(operations[i]);
            count++;
        }
        else{
            if(strcmp(operations[i],"C")==0){
                top--;
                count--;
            }
            else if(strcmp(operations[i],"D")==0){
                stack[++top]=stack[top]*2;
                count++;
            }
            else if(strcmp(operations[i],"+")==0){
                stack[++top]=stack[top]+stack[top-1];
                count++;
            }
            else{
                return -1;
            }
        }
    }
    for(int i=0;i<count;i++){
        sum+=stack[i];
    }
    return(sum);
}