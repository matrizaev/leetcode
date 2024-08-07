/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    *returnSize = digitsSize;
    int *result = calloc(*returnSize, sizeof(int));
    int carry = 1;
    for (ssize_t j = digitsSize - 1, i = (*returnSize) - 1; j >= 0; j--, i--) {
        result[i] = carry + digits[j];
        if (result[i] >= 10) {
            carry = 1;
            result[i] -= 10;
        } else {
            carry = 0;
        }
    }
    if (carry != 0) {
        *returnSize += 1;
        result = realloc(result, (*returnSize) * sizeof(int));
        memmove(&result[1], result, digitsSize * sizeof(int));
        result[0] = carry;
    }
    return result;
}
