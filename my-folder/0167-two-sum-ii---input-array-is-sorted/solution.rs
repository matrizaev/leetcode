impl Solution {
    pub fn two_sum(numbers: Vec<i32>, target: i32) -> Vec<i32> {
        use std::cmp::Ordering;

        let (mut i, mut j) = (0, numbers.len() - 1);
        while i < j {
            match (numbers[i] + numbers[j]).cmp(&target) {
                Ordering::Equal => return vec![(i+1) as i32, (j+1) as i32],
                Ordering::Greater => j -= 1,
                Ordering::Less => i += 1,
            }

        }

        vec![]
    }
}
