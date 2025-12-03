impl Solution {
    pub fn find_median_sorted_arrays(nums1: Vec<i32>, nums2: Vec<i32>) -> f64 {
        let mut nums = nums1;
        nums.extend(nums2);
        nums.sort();
        let nums_len = nums.len();
        if nums_len % 2 == 1 {
            nums[nums_len / 2].into()
        } else {
            ((nums[nums_len / 2] + nums[nums_len / 2 - 1]) as f64 / 2.0)
        }
    }
}
