use std::collections::HashSet;
impl Solution {
    pub fn contains_duplicate(nums: Vec<i32>) -> bool {
        let mut hs:HashSet<i32> = HashSet::with_capacity(nums.len());
        for i in nums {
            if !hs.insert(i) {
                return true;
            }
        }
        false
    }
}
