/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int partial = 0;
    for (size_t i = 0; i < numsSize; i++){
        partial += nums[i];
        nums[i] = partial;
    }
    return nums;
}
