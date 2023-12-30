int findMaxConsecutiveOnes(int* nums, int numsSize) {
    size_t result = 0, current = 0;
    for (size_t i = 0; i < numsSize; i++){
        if (nums[i] != 1){
            current = 0;
            continue;
        }
        current++;
        if (current > result)
            result = current;
    }
    return result;
}
