/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int i = 0, j = numbersSize - 1;
    while (i < j){
        int current = (numbers[i] + numbers[j]);
        if (current == target){
            int *result = malloc(2 * sizeof(int));
            *returnSize = 2;
            result[0] = i+1;
            result[1] = j+1;
            return result;
        }
        if (current < target)
            i++;
        else
            j--;
    }
    // int binary_search(int *nums, int start, int end, int target){
    //     if (nums[start] == target)
    //         return start;
    //     if (nums[end] == target)
    //         return end;
    //     while ((end-start) > 1){
    //         unsigned int middle = (start + end) / 2;
    //         if (nums[middle] == target)
    //             return middle;
    //         if ((target - nums[middle]) > 0)
    //             start = middle;
    //         else
    //             end = middle;
    //     }
    //     return -1;
    // }
    // for (int i = 0; i < (numbersSize - 1); i++){
    //     int j = binary_search(numbers, i+1, (numbersSize-1), (target-numbers[i]));
    //     if (j != -1){
    //         int *result = malloc(2 * sizeof(int));
    //         *returnSize = 2;
    //         result[0] = i+1;
    //         result[1] = j+1;
    //         return result;
    //     }
    // }
    *returnSize = 0;
    return NULL;

}
