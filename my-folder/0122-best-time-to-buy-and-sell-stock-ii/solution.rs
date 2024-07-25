impl Solution {
    pub fn max_profit(prices: Vec<i32>) -> i32 {
        prices.windows(2)
            .map(|w| (w[1] - w[0]).max(0))
            .sum()
    }
}
