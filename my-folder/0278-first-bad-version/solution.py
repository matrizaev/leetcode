# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        start = 1
        end = n
        if isBadVersion(start):
            return start
        while (end-start) > 1:
            middle = (start + end) // 2
            is_bad_current = isBadVersion(middle)
            is_bad_previous = isBadVersion(middle - 1)
            if is_bad_current and not is_bad_previous:
                return middle
            if is_bad_current:
                end = middle
            else:
                start = middle
        return n
