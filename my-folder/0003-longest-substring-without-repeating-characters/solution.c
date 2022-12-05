int lengthOfLongestSubstring(char * s){
    int hash_map[256] = {0};
    int left = 0, right = 0;
    int res = 0;
    while (s != NULL && s[right] != '\0'){
        char r = s[right];
        if (hash_map[r] > 0){
            if (hash_map[r] >= left)
                left = hash_map[r];
        }
        int new_len = right - left + 1;
        if (new_len > res)
            res = new_len;
        right++;
        hash_map[r] = right;
    }
    return res;
}
