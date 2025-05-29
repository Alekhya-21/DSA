double trimMean(int* arr, int arrSize) {
    for(int i=0;i<arrSize;i++){
        for(int j=i+1;j<arrSize;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int sum=0,count=0;
    int prcnt=arrSize*5/100;
    for(int i=prcnt;i<arrSize-prcnt;i++){
        sum+=arr[i];
        count++;
    }
    double res=(double)sum/count;
    return(res);
}