impl Solution {
    pub fn valid_mountain_array(arr: Vec<i32>) -> bool {
        use std::cmp::Ordering;

        if arr.len() < 3 {
            return false;
        }

        let mut comparisons = arr.windows(2).map(|pair| pair[0].cmp(&pair[1]));

        // Check for the initial increasing phase: the first comparison must be `Ordering::Less`
        if comparisons.next() != Some(Ordering::Less) {
            return false;
        }

        // Check the middle phase: transitions from `Less` to `Greater`, indicating a peak
        if !comparisons.by_ref().skip_while(|&x| x == Ordering::Less).next().eq(&Some(Ordering::Greater)) {
            return false;
        }

        // Verify the remaining phase: all comparisons should now be `Ordering::Greater`
        if comparisons.skip_while(|&x| x == Ordering::Greater).next().is_some() {
            return false;
        }

        true
    }
}
