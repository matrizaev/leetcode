impl Solution {
    pub fn partition_string(s: String) -> i32 {
        let mut res: i32 = 1;
        let mut bit_vector: [bool; 26] = [false; 26];
        for c in s.chars() {
            let index: usize = c as usize - 'a' as usize;
            if bit_vector[index] {
                res += 1;
                bit_vector = [false; 26];
            }
            bit_vector[index] = true;
        }
        res
    }
}
