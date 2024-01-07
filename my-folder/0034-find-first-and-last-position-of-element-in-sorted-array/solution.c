/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int *result = malloc(2 * sizeof(int));
    result[0] = -1;
    result[1] = -1;
    *returnSize = 2;
    
    if (!nums || !numsSize)
        return result;
    
    // find the left border
    size_t left = 0, right = numsSize - 1;
    while (left < right){
        size_t middle = left + ((right - left) >> 1);
        if (nums[middle] < target)
            left = middle + 1;
        else
            right = middle;
    }
    if (nums[left] != target)
        return result;
        
        
    result[0] = left;
    // find the right border
    right = numsSize - 1;
    while (left < right){
        size_t middle = left + ((right - left) >> 1) + 1;
        if (nums[middle] > target)
            right = middle - 1;
        else
            left = middle;
    }
    
    result[1] = right;
    
    return result;
}
