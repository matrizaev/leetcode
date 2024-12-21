impl Solution {
    pub fn height_checker(heights: Vec<i32>) -> i32 {
        let mut indices: Vec<usize> = (0..heights.len()).collect();
        indices.sort_unstable_by_key(|&i| heights[i]);
        
        indices
            .into_iter()
            .enumerate()
            .filter(|&(sorted_pos, original_idx)| heights[sorted_pos] != heights[original_idx])
            .count() as i32
    }
}
