impl Solution {
    pub fn h_index(mut citations: Vec<i32>) -> i32 {
        citations.sort_unstable_by(|a, b| b.cmp(a));
        citations.iter()
        .enumerate()
        .take_while(|&(i, &num)| num >= (i as i32 + 1))
        .count() as i32
    }
}
