impl Solution {
    pub fn remove_duplicates(nums: &mut Vec<i32>) -> i32 {
        let mut seen = 0;

        nums.dedup_by(|a, b| {
            if a == b {
                seen += 1;
                if seen < 2 {
                    false
                } else {
                    true
                }
            } else {
                seen = 0;
                false
            }
        });

        nums.len() as i32
    }
}
