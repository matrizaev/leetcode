

int singleNumber(int* nums, int numsSize){
    int result = nums[0];
    for (size_t i = 1; i < numsSize; i++){
        result ^= nums[i];
    }
    return result;
}
