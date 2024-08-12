int hammingWeight(int n) {
    int result = 0;
    for (size_t i = 0; i < sizeof(int)*8; i++) {
        result += n & 0x1;
        n = n >> 1;
    }
    return result;
}
