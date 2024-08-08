impl Solution {
    pub fn is_valid(s: String) -> bool {
        let mut stack = Vec::new();

        for c in s.chars() {
            match c {
                '(' | '{' | '[' => stack.push(c),
                ')' | '}' | ']' => {
                    if stack.pop().map_or(false, |open| {
                        match (open, c) {
                            ('(', ')') | ('{', '}') | ('[', ']') => true,
                            _ => false,
                        }
                    }) == false {
                        return false;
                    }
                }
                _ => return false, // Invalid character
            }
        }
        stack.is_empty()
    }
}
