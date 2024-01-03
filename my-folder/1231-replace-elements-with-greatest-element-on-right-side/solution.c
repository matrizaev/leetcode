/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int arrSize, int* returnSize) {
    
    *returnSize = arrSize;
    
    int max = -1;
    for (ssize_t i = arrSize - 1; i >= 0; i--){
        int temp = arr[i];
        arr[i] = max;
        if (temp > max)
            max = temp;
    }

    return arr;
}
