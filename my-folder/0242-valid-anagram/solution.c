bool isAnagram(char* s, char* t) {
    size_t hashmap[256] = {0};

    while (*s && *t) {
        hashmap[*s]++;
        hashmap[*t]--;
        s++; t++;
    }

    if (*s != *t)
        return false;

    for (size_t i = 0; i < 256; i++) {
        if (hashmap[i] != 0)
            return false;
    }

    return true;
}
