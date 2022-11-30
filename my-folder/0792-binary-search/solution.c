int search(int* nums, int numsSize, int target){
        int start = 0, end = numsSize-1;
        if (nums[start] == target)
                return start;
        if (nums[end] == target)
                return end;
        char dir = nums[start] < nums[end] ? 1 : -1;
        while ((end-start) > 1){
                int middle = (start + end) / 2;
                if (nums[middle] == target)
                        return middle;
                if (dir*(target - nums[middle]) > 0)
                        start = middle;
                else
                        end = middle;
        }
        return -1;
}
