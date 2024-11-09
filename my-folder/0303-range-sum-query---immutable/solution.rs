struct NumArray {
    prefix_sum: Vec<i32>,
}

impl NumArray {
    fn new(nums: Vec<i32>) -> Self {
        NumArray {
            prefix_sum: nums
                .iter()
                .scan(0, |state, &x| {
                    *state += x;
                    Some(*state)
                })
                .collect(),
        }
    }

    fn sum_range(&self, left: i32, right: i32) -> i32 {
        let left = if (left as usize) > 0 {
            self.prefix_sum[(left - 1) as usize]
        } else {
            0
        };
        let right = if (right as usize) < self.prefix_sum.len() {
            self.prefix_sum[right as usize]
        } else {
            0
        };

        right - left
    }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * let obj = NumArray::new(nums);
 * let ret_1: i32 = obj.sum_range(left, right);
 */
