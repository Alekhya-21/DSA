int findPeakElement(int* nums, int numsSize) {
    int arr[numsSize];
    for(int i=0;i<numsSize;i++){
        arr[i]=nums[i];
    }
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(arr[i]<arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
    int main=arr[0];
    for(int i=0;i<numsSize;i++){
        if(nums[i]==main){
            return(i);
        }
    }
    return -1;
}