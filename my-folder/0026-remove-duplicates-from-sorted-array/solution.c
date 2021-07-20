int removeDuplicates(int* nums, int numsSize){
    if (numsSize == 0 || nums == NULL)
	    return 0;
    int k = 0;
	for (ssize_t i = 1; i < numsSize; i++){
		if (nums[i] != nums[k]){
			k++;
			nums[k] = nums[i];
		}
	}
	return k+1;
}
