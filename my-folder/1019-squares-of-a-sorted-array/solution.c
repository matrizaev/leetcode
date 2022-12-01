/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    unsigned int *result = malloc(numsSize * sizeof(int));
    if (result == NULL){
        *returnSize = 0;
        return NULL;
    }
    *returnSize = numsSize;
    int j = 0, k = numsSize-1;
    for (int i = numsSize - 1; i >= 0; i--){
        unsigned int num1 = nums[j]*nums[j];
        unsigned int num2 = nums[k]*nums[k];
        if (num1 > num2){
            result[i] = num1;
            j++;
        }
        else {
            result[i] = num2;
            k--;
        }
    }
    return result;
}
