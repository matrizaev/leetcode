char* addBinary(char* a, char* b) {
    size_t a_len = strlen(a), b_len = strlen(b);
    size_t result_len = (a_len > b_len ? a_len : b_len) + 2;
    char *result = calloc(result_len, 1);

    uint8_t carry = 0;
    for (size_t i = result_len - 2; i > 0; i--) {
        uint8_t ca = a_len > 0 ? a[--a_len] - '0' : 0;
        uint8_t cb = b_len > 0 ? b[--b_len] - '0' : 0;

        uint8_t sum = ca + cb + carry;

        result[i] = (sum % 2) + '0';
        carry = sum / 2;
    }

    if (carry)
        result[0] = '1';
    else {
        for (size_t i = 1; i < result_len; i++) {
            result[i-1] = result[i];
        }
    }

    return result;
}
