impl Solution {
    pub fn num_identical_pairs(nums: Vec<i32>) -> i32 {
        nums.iter()
            .enumerate()
            .flat_map(
                |(i, &num_i)| 
                nums.iter().skip(i + 1).filter(move |&&num_j| num_i == num_j)
            )
            .count() as i32
    }
}
