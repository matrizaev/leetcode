

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
    *returnSize = 2*numsSize;
    int *result = malloc(*returnSize*sizeof(int));
    for (size_t i = 0; i < numsSize; i++){
        result[i] = nums[i];
        result[numsSize + i] = nums[i];
    }
    return result;
}
