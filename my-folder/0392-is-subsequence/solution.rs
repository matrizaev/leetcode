impl Solution {
    pub fn is_subsequence(s: String, t: String) -> bool {
        let mut s_chars = s.chars();
        let mut current_char = s_chars.next();

        for t_char in t.chars() {
            if let Some(c) = current_char {
                if c == t_char {
                    current_char = s_chars.next();
                }
            } else {
                break;
            }
        }

        current_char.is_none()
    }
}
