int searchInsert(int* nums, int numsSize, int target){
    long start = 0, end = numsSize-1; 
    if (nums[start] >= target)
        return start;
    if (nums[end] <= target)
        return nums[end] == target ? end : end + 1;
    char dir = nums[start] < nums[end] ? 1 : -1;
    while ((end-start) > 1){
        long int middle = (start + end) / 2;
        if (nums[middle] == target)
                return middle;
        if (dir*(target - nums[middle]) > 0)
            start = middle;
        else
            end = middle;
    }
    return end;
}
