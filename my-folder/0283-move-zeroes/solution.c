void moveZeroes(int* nums, int numsSize){
    int non_zero_index = 0;

    for (int i = 0; i < numsSize; i++){
        if (nums[i] != 0){
            int temp = nums[non_zero_index];
            nums[non_zero_index++] = nums[i];
            nums[i] = temp;
        }
    }

    // for (int i = numsSize-2; i >= 0; i--){
    //     if (nums[i] == 0){
    //         int j = i + 1;
    //         for (; j < zero_index; j++){
    //             int temp = nums[j];
    //             nums[j] = nums[j-1];
    //             nums[j-1] = temp;
    //         }
    //         zero_index = j-1;
    //     }
    // }
}
