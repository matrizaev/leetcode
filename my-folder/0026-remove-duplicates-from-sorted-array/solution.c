int removeDuplicates(int* nums, int numsSize) {
    size_t j = 1;
    for (size_t i = 1; i < numsSize; i++){
        if (nums[i] > nums[i-1])
            nums[j++] = nums[i];
    }
    return j;
}
