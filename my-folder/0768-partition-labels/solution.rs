impl Solution {
    pub fn partition_labels(s: String) -> Vec<i32> {
        let mut last = [0; 26]; // assuming only lowercase letters

        // Record last occurrence of each character
        for (i, b) in s.bytes().enumerate() {
            last[(b - b'a') as usize] = i;
        }

        let mut result = Vec::new();
        let (mut start, mut end) = (0, 0);

        for (i, b) in s.bytes().enumerate() {
            end = end.max(last[(b - b'a') as usize]);

            if i == end {
                result.push((end - start + 1) as i32);
                start = i + 1;
            }
        }

        result
    }
}

