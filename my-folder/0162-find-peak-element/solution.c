int findPeakElement(int* nums, int numsSize) {

    int left = 0, right = numsSize - 1;
    while (left < right){
        int middle = left + ((right - left) >> 1);
        if (nums[middle] < nums[middle+1])
            left = middle + 1;
        else
            right = middle;
    }
       
    return right;
}
