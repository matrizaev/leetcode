

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){

    for (ssize_t i = 0; i < (numsSize-1); i++){
        int remainder = target - nums[i];
        for (ssize_t j = i+1; j < numsSize; j++){
            if (nums[j] == remainder){
                int *result = calloc(2, sizeof(int));
                *returnSize = 2;
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}
