/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void swap(int *nums, int i, int j){
    int tmp = nums[i];
    nums[i] = nums[j];
    nums[j] = tmp;
}

void print_array(int *nums, int numsSize){
    for (int i = 0; i < numsSize; i++)
        printf("%d ", nums[i]);
    puts("");
}

void selection_sort(int *nums, int numsSize){
    for (int i = 0; i < numsSize - 1; i++){
        int min_index = i;
        for (int j = i + 1; j < numsSize; j++){
            if (nums[j] < nums[min_index])
                min_index = j;
        }
        swap(nums, i, min_index);
    }
}

void quick_sort(int *nums, size_t numsSize)
{
    if (numsSize < 4)
    {
        selection_sort(nums, numsSize);
        return;
    }

    int pivot = nums[rand() % numsSize];
    size_t i = 0, j = numsSize - 1;
    bool swaped = false;
    while (j > i)
    {
        while (j > i && nums[i] < pivot){
            swaped = swaped || (nums[i] != nums[j]);
            i++;
        }

        while (j > i && nums[j] > pivot){
            swaped = swaped || (nums[i] != nums[j]);
            j--;
        }

        if (j > i)
        {
            swaped = swaped || (nums[i] != nums[j]);
            if (nums[i] != nums[j])
                swap(nums, i, j);
            i++;
        }
    }
    if (!swaped)
        return;
    quick_sort(nums, j);
    quick_sort(&(nums[j]), numsSize - j);
}

int* sortArray(int* nums, int numsSize, int* returnSize){
    quick_sort(nums, numsSize);
    *returnSize = numsSize;
    return nums;
}
