int get_digit_count(int val){
    int result = 0;
    while (val != 0){
        result++;
        val /= 10;
    }
    return result;
}

int findNumbers(int* nums, int numsSize) {
    int result = 0;
    for (size_t i = 0; i < numsSize; i++){
        result += (get_digit_count(nums[i]) % 2 == 0 ? 1 : 0);
    }
    return result;
}
