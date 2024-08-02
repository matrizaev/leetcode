int scoreOfString(char* s) {
    int result = 0;
    for (size_t i = 1; s[i] != '\0'; i++) {
        result += abs(s[i-1] - s[i]);
    }
    return result;
}
