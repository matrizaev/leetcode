int romanToInt(char* s) {
    int map[256] = {0};
    map['I'] = 1;
    map['V'] = 5;
    map['X'] = 10;
    map['L'] = 50;
    map['C'] = 100;
    map['D'] = 500;
    map['M'] = 1000;

    int result = 0;
    int prev = 0;

    while (*s) {
        int current = map[(unsigned char)*s];
        result += current;
        if (prev < current) {
            result -= 2 * prev;
        }
        prev = current;
        s++;
    }

    return result;
}
