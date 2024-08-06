bool isPalindrome(char* s) {
    ssize_t l = strlen(s) - 1;
    ssize_t i = 0;
    bool result = true;
    while (i < l) {
        while (i < l && !isalnum(s[i]))
            i++;
        while (i < l && !isalnum(s[l]))
            l--;
        if (tolower(s[i]) != tolower(s[l])) {
            result = false;
            break;
        }
        i++;l--;
    }
    return result;
}
