class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:

        start = 0
        end = len(nums)-1
        if (nums[start] >= target):
            return start
        if (nums[end] <= target):
            return end if nums[end] == target else end + 1
        while ((end-start) > 1):
            middle = (start + end) // 2
            if (nums[middle] == target):
                    return middle
            if (target - nums[middle]) > 0:
                start = middle
            else:
                end = middle
        return end

