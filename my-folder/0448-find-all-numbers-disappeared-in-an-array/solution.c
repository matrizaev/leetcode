/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int nums_freq[numsSize];
    int *result = malloc(numsSize * sizeof(int));
    
    memset(nums_freq, 0, numsSize * sizeof(int));
    for (size_t i = 0; i < numsSize; i++){
        nums_freq[nums[i] - 1]++;
    }
    
    size_t j = 0;
    for (size_t i = 0; i < numsSize; i++){
        if (nums_freq[i] == 0)
            result[j++] = i + 1;
    }
    *returnSize = j;
    return result;
}
