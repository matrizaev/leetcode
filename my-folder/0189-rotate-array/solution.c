void rotate(int* nums, int numsSize, int k){
    void reverse(int *nums, int start, int end){
        while (start < end){
            end--;
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
        }
    }

    k = k % numsSize;
    if (k == 0)
        return;
    reverse(nums, 0, numsSize);
    reverse(nums, 0, k % numsSize);
    reverse(nums, k % numsSize, numsSize);
    // for (; k > 0; k--){
    //     int temp = nums[0];
    //     nums[0] = nums[numsSize-1];
    //     for (int i = 1; i < numsSize; i++){
    //         int temp2 = nums[i];
    //         nums[i] = temp;
    //         temp = temp2;
    //     }
    // }
}
