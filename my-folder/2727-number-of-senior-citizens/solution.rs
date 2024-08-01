impl Solution {
    pub fn count_seniors(details: Vec<String>) -> i32 {
        details.iter()
            .filter(|detail| {
                let age_str = &detail[11..=12];
                age_str.parse::<u8>().unwrap() > 60
            })
            .count() as i32
    }
}
