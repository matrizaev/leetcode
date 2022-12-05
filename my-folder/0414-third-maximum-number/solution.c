int thirdMax(int* nums, int numsSize){
    long int MIN_INT = -2e31 - 1;
    long int arr[3] = {MIN_INT, MIN_INT, MIN_INT};
    int count = 1;
    arr[0] = nums[0];
    for (int i = 1; i < numsSize; i++){
        if (nums[i] > arr[0]){
            arr[2] = arr[1];
            arr[1] = arr[0];
            arr[0] = nums[i];
            count++;
        }
        else if ((nums[i] > arr[1]) && (nums[i] != arr[0])){
            arr[2] = arr[1];
            arr[1] = nums[i];
            count++;
        }
        else if (
            (nums[i] > arr[2]) && 
            (nums[i] != arr[1]) && 
            (nums[i] != arr[0])){
            arr[2] = nums[i];
            count++;
        }
    }
    return count >= 3 ? arr[2] : arr[0];
}
