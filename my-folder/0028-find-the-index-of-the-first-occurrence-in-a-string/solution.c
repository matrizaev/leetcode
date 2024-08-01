int strStr(char* haystack, char* needle) {
    int i = 0;
    size_t needle_length = strlen(needle);
    while(haystack[i])
        if(!strncmp(&haystack[i++], needle, needle_length))
            return i-1;
    return -1;
}
