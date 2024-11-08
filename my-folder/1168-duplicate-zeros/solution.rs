impl Solution {
    pub fn duplicate_zeros(arr: &mut Vec<i32>) {
        let original_len = arr.len();
        let zeros_to_add = arr.iter().take(original_len).filter(|&&x| x == 0).count();
        let mut write_index = original_len + zeros_to_add - 1;

        for read_index in (0..original_len).rev() {
            if write_index < original_len {
                arr[write_index] = arr[read_index];
            }
            if arr[read_index] == 0 {
                write_index -= 1;
                if write_index < original_len {
                    arr[write_index] = 0;
                }
            }
            if write_index > 0 {
                write_index -= 1;
            } else {
                break;
            }
        }
    }
}
