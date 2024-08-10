impl Solution {
    pub fn length_of_longest_substring(s: String) -> i32 {
        use std::collections::HashMap;
        let mut char_index_map = HashMap::new();
        let mut max_length = 0;
        let mut start = 0;

        for (i, c) in s.chars().enumerate() {
            if let Some(prev_index) = char_index_map.insert(c, i) {
                if prev_index >= start {
                    start = prev_index + 1;
                }
            }
            max_length = max_length.max(i - start + 1);
        }

        max_length as i32
    }
}
