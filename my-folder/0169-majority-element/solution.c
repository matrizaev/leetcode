int majorityElement(int* nums, int numsSize) {
    // The Boyer-Moore Voting Algorithm
    int candidate = nums[0];
    int count = 1;

    // Phase 1: Find a candidate for the majority element
    for (size_t i = 1; i < numsSize; i++) {
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
            if (count == 0) {
            candidate = nums[i];
            count = 1;
            }
        }
    }

    // Phase 2: Verify that the candidate is indeed the majority element
    count = 0;
    for (size_t i = 0; i < numsSize; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    // Since the problem guarantees that a majority element always exists,
    // we do not need to check if count > numsSize / 2
    return candidate;
}
