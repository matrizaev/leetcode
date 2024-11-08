impl Solution {
    pub fn find_numbers(nums: Vec<i32>) -> i32 {
        nums.iter()
            .map(|num| (*num as f64).log10())
            .filter(|digits| (*digits as u32) % 2 != 0)
            .count() as i32
    }
}
