int removeDuplicates(int* nums, int numsSize) {
    size_t j = 0;
    for (size_t i = 1; i < numsSize; i++){
        if (nums[i] > nums[j]){
            nums[++j] = nums[i];
        }
    }
    return j + 1;
}
