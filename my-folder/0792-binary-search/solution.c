int search(int* nums, int numsSize, int target){
        int start = 0, end = numsSize-1;
        while (start < end){
            int middle = (start + end) / 2;
            if (nums[middle] == target)
                return middle;
            if (target > nums[middle])
                start = middle + 1;
            else
                end = middle - 1;
        }
        return nums[start] == target ? start : -1;
}
