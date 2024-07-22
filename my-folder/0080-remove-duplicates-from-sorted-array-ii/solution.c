int removeDuplicates(int* nums, int numsSize) {
    size_t j = 0;
    size_t seen = 1;
    for (size_t i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i - 1]) {
            seen++;
        } else {
            seen = 1;
        }

        if (seen <= 2) {
            nums[++j] = nums[i];
        }
    }
    return j + 1;
}
