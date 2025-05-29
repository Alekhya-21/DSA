/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize=2*numsSize;
    int *res=(int*)malloc(sizeof(int)*(*returnSize));
    for(int i=0;i<numsSize;i++){
        res[i]=nums[i];
        res[numsSize+i]=nums[i];
    }
    return res;
}