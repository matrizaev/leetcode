class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i,first in enumerate(nums[:-1]):
            try:
                j = nums[i+1:].index(target-first)
                return i,j+i+1
            except ValueError:
                continue
