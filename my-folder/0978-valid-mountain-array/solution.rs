impl Solution {
    pub fn valid_mountain_array(arr: Vec<i32>) -> bool {
        use std::cmp::Ordering;

        if arr.len() < 3 {
            return false;
        }


        let mut increasing = true;
        let mut has_increased = false;
        let mut has_decreased = false;

        for pair in arr.windows(2) {
            match pair[0].cmp(&pair[1]) {
                Ordering::Less if increasing => {
                    has_increased = true;
                }
                Ordering::Greater if increasing => {
                    increasing = false;
                    has_decreased = true;
                }
                Ordering::Greater => {
                    has_decreased = true;
                }
                _ => return false, // Either Ordering::Equal or invalid transition
            }
        }

        has_increased && has_decreased
    }
}
