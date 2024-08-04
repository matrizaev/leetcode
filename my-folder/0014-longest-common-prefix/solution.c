char* longestCommonPrefix(char** strs, int strsSize) {
    char *s = strs[0];
    
    for (size_t i = 0; s[i] != 0; i++) {
        for (size_t j = 1; j < strsSize; j++) {
            if (s[i] != strs[j][i]) {
                s[i] = 0;
                goto exit;
            }
        }
    }
exit:
    return s;
}
