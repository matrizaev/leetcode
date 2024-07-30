impl Solution {
    pub fn int_to_roman(num: i32) -> String {

        let mut num = num;

        let roman_numbers = [
            (1000, "M"),
            (900, "CM"),
            (500, "D"),
            (400, "CD"),
            (100, "C"),
            (90, "XC"),
            (50, "L"),
            (40, "XL"),
            (10, "X"),
            (9, "IX"),
            (5, "V"),
            (4, "IV"),
            (1, "I"),
        ];

        let mut result = String::new();
        for &(value, symbol) in &roman_numbers {
            while num >= value {
                num -= value;
                result.push_str(symbol);
            }
        }

        result
    }
}
