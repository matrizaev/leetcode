impl Solution {
    pub fn roman_to_int(s: String) -> i32 {

        let mut map = std::collections::HashMap::new();
        map.insert('I', 1);
        map.insert('V', 5);
        map.insert('X', 10);
        map.insert('L', 50);
        map.insert('C', 100);
        map.insert('D', 500);
        map.insert('M', 1000);

        let mut result = 0;
        let mut prev = 0;

        for c in s.chars() {
            let current = *map.get(&c).unwrap_or(&0);
            result += current;
            if prev < current {
                result -= 2 * prev;
            }
            prev = current;
        }

        result
    }
}
