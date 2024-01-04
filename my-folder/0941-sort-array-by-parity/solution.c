/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    size_t j = numsSize - 1, i = 0;
    while (i < j){
        if (nums[i] % 2 == 0){
            i++;
            continue;
        }
        if (nums[j] % 2 == 1){
            j--;
            continue;
        }
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
    return nums;
}
