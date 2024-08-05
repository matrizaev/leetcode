impl Solution {
    pub fn longest_common_prefix(strs: Vec<String>) -> String {
    let mut prefix = &strs[0][..];

    for s in &strs[1..] {
        while !s.starts_with(prefix) {
            if prefix.is_empty() {
                return "".to_string();
            }
            prefix = &prefix[..prefix.len() - 1];
        }
    }

    prefix.to_string()
    }
}
