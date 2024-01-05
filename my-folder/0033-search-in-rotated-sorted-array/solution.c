int search(int* nums, int numsSize, int target) {
    
    if (numsSize == 1)
        return nums[0] != target ? -1 : 0;
    
    
    int left = 0, right = numsSize - 1;
    while (left < right){
        int middle = left + ((right - left) >> 1);
        if (nums[middle] > nums[right])
            left = middle + 1;
        else
            right = middle;
    }
    
    int rotation_point = left;
    if (nums[numsSize-1] >= target){
        left = rotation_point;
        right = numsSize - 1;
    }
    else {
        left = 0;
        right = rotation_point - 1;
    }
    while (left <= right){
        int middle = left + ((right - left) >> 1);
        if (nums[middle] == target)
            return middle;
        else if (nums[middle] < target)
            left = middle + 1;
        else
            right = middle - 1;
    }
    
    return -1;
}
