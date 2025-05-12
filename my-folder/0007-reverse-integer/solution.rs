impl Solution {
    pub fn reverse(mut x: i32) -> i32 {
        let mut result: i32 = 0;

        while x != 0 {
            let digit = x % 10;
            x /= 10;

            result = match result.checked_mul(10).and_then(|r| r.checked_add(digit)) {
                Some(val) => val,
                None => return 0,
            };
        }

        result
    }
}

