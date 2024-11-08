impl Solution {
    pub fn find_max_consecutive_ones(nums: Vec<i32>) -> i32 {
        nums.split(|&num| num != 1)
        .map(|ones_sequence| ones_sequence.len() as i32)
        .max()
        .unwrap_or(0)
    }
}
