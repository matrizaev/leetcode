impl Solution {
    pub fn find_words_containing(words: Vec<String>, x: char) -> Vec<i32> {
        words
            .iter()
            .enumerate()
            .filter(|(i, word)| word.contains(x))
            .map(|(i, word)| i as i32)
            .collect()
    }
}
