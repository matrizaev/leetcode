impl Solution {
    pub fn sort_colors(nums: &mut Vec<i32>) {
        for i in 0..nums.len()-1 {
            let mut min_index = i;
            for j in i+1..nums.len() {
                if nums[j] < nums[min_index] {
                    min_index = j;
                }
            }
            if min_index != i {
                nums.swap(i, min_index);
            }
        }
    }
}
