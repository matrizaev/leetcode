impl Solution {
    pub fn majority_element(nums: Vec<i32>) -> i32 {
        // The Boyer-Moore Voting Algorithm
        // Phase 1: Find a candidate for the majority element
        let mut candidate = nums[0];
        let mut count = 1;

        nums.iter().skip(1).for_each(|&num| {
            if num == candidate {
                count += 1;
            } else {
                count -= 1;
                if count == 0 {
                    candidate = num;
                    count = 1;
                }
            }
        });

        // Phase 2: Verify that the candidate is indeed the majority element
        count = nums.iter().filter(|&&num| num == candidate).count() as i32;

        // Assuming the majority element always exists
        candidate
    }
}
