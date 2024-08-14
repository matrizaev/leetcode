impl Solution {
    pub fn add_binary(a: String, b: String) -> String {
        let mut carry = 0;

        let mut a = a;
        let mut b = b;
        if a.len() < b.len() {
            std::mem::swap(&mut a, &mut b);
        }

        let result: String = a.chars()
            .rev()
            .zip(b.chars().rev().chain(std::iter::repeat('0')))
            .map(|(ac, bc)| {
                let sum = ac.to_digit(2).unwrap() + bc.to_digit(2).unwrap() + carry;
                carry = sum / 2;
                (sum % 2).to_string()
            })
            .collect();

        if carry != 0 {
            format!("{}{}", carry, result.chars().rev().collect::<String>())
        } else {
            result.chars().rev().collect()
        } 
    }
}
