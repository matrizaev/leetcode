int removeElement(int* nums, int numsSize, int val) {
    size_t j = 0;
    for (size_t i = 0; i < numsSize; i++){
        if (nums[i] != val)
            nums[j++] = nums[i];
    }
    return j;
}
