bool isSubsequence(char* s, char* t) {
    bool result = true;

    size_t i = 0, j = 0;
    while (s[i]) {
        while (t[j] && (t[j] != s[i]))
            j++;
        if (!t[j]){
            result = false;
            break;
        }
        i++;j++;
    }

    return result;
}
