use std::collections::HashMap;
impl Solution {
    pub fn is_anagram(s: String, t: String) -> bool {
        let iter = s.chars().zip(t.chars());
        let result = iter
            .fold(HashMap::new(), |mut map, (x, y)| {
                map.entry(x).and_modify(|e| *e += 1).or_insert(1);
                map.entry(y).and_modify(|e| *e -= 1).or_insert(-1);
                map
            });
        s.len() == t.len() && !result.values().any(|&x| x != 0)
    }
}
