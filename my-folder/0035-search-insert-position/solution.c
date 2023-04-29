size_t searchInsert(int* nums, size_t numsSize, int target){
    ssize_t start = 0, end = numsSize - 1;
    while (start <= end){
        ssize_t middle = (start + end) / 2;
        if (nums[middle] == target)
            return middle;
        if (nums[middle] < target)
            start = middle + 1;
        else
            end = middle - 1;
    }
    return start;
}

