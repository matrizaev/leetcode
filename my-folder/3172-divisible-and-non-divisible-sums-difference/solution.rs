impl Solution {
    pub fn difference_of_sums(n: i32, m: i32) -> i32 {
        let num1: i32 = (1..=n)
            .filter(|x| x % m != 0)
            .sum();
        let num2: i32 = (1..=n)
            .filter(|x| x % m == 0)
            .sum();
        num1 - num2
    }
}
