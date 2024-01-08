/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* findClosestElements(int* arr, int arrSize, int k, int x, int* returnSize) {
    int *result = malloc(k*sizeof(int));
    *returnSize = k;
    
    size_t left = 0, right = arrSize - k;
    
    while (left < right){
        size_t middle = left + ((right - left) >> 1);
        if (x - arr[middle] > arr[middle + k] - x)
            left = middle + 1;
        else
            right = middle;
    }
    
    for (size_t i = 0; i < k; i++)
        result[i] = arr[left++];
    
    return result;
}
