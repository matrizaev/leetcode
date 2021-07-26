

/**
 * Note: The returned array must be malloced, assume caller calls free().
*/

int* buildArray(int* nums, int numsSize, int* returnSize){

    int *result = malloc(numsSize*sizeof(int));
    *returnSize = numsSize;
    for (size_t i = 0; i < numsSize; i++)
        result[i] = nums[nums[i]];
    return result;
}
