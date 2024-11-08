impl Solution {
    pub fn sorted_squares(nums: Vec<i32>) -> Vec<i32> {
        let mut nums = nums.iter()
            .map(|num| num * num)
            .collect::<Vec<i32>>();
        nums.sort();
        nums
    }
}
