impl Solution {
    pub fn equal_frequency(word: String) -> bool {
        let mut frequencies = std::collections::HashMap::new();
        for c in word.chars().filter(|c| c.is_alphabetic()) {
            *frequencies.entry(c).or_insert(0) +=  1;
        }

        let mut frequencies2 = std::collections::HashMap::new();
        for c in frequencies.values() {
            *frequencies2.entry(c).or_insert(0) +=  1;
        }

        if frequencies2.len() == 1 {
            return frequencies2.contains_key(&1) || frequencies2.contains_key(&word.len());
        }

        if frequencies2.len() == 2 {
            let min = frequencies.values().min().unwrap();
            return frequencies2.get(&1) == Some(&1) || frequencies2.get(&(*min + 1)) == Some(&1);
        }

        false
    }
}
