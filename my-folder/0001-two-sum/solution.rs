use std::collections::HashMap;
impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut map: HashMap<i32, i32> = HashMap::new();
        for (i, &v) in nums.iter().enumerate() {
            let diff = target - v;
            match map.get(&diff) {
                Some(&j) => {
                    return vec![i.try_into().unwrap(), j];
                },
                None => {map.insert(v, i.try_into().unwrap());},
            };
        }
        vec![0, 0]
    }
}
