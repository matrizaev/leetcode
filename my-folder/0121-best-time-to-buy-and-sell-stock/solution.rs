impl Solution {
    pub fn max_profit(prices: Vec<i32>) -> i32 {
        use std::cmp::max;
        use std::cmp::min;
        let mut min_price = prices[0];
        let mut max_profit = 0;
        for price in prices.into_iter().skip(1) {
            min_price = min(min_price, price);
            max_profit = max(max_profit, price - min_price);
        }
        max_profit
    }
}
