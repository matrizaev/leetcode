impl Solution {
    pub fn kth_factor(n: i32, k: i32) -> i32 {
        (1..=n)
            .filter(|i| n % i == 0)
            .skip((k - 1) as usize)
            .next()
            .unwrap_or(-1)
    }
}
