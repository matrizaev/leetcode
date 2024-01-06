int findMin(int* nums, int numsSize) {
    if (numsSize == 1)
        return nums[0];
    
    
    int left = 0, right = numsSize - 1;
    while (left < right){
        int middle = left + ((right - left) >> 1);
        if (nums[middle] > nums[right])
            left = middle + 1;
        else
            right = middle;
    }
       
    return nums[left];
}
