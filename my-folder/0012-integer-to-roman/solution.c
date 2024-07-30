typedef struct {
    int scale;
    char *digit;
    size_t digit_size;
} RomanNumberScale;

typedef struct {
    int num;
    char *result;
} FillDigitReturn;

FillDigitReturn fill_digit(int num, char *result, RomanNumberScale roman_number) {
    int num_scale = num / roman_number.scale;
    for (int j = 0; j < num_scale; j++) {
        size_t digit_len = strlen(roman_number.digit);
        memcpy(result, roman_number.digit, digit_len);
        result += roman_number.digit_size;
    }
    FillDigitReturn return_value = {.num = num % roman_number.scale, .result = result};
    return return_value;
}

char* intToRoman(int num) {

    #define ROMAN_NUMBERS_COUNT 13
    #define LONGEST_ROMAN_NUMBER 100
    RomanNumberScale roman_numbers[ROMAN_NUMBERS_COUNT] = {
        {.scale = 1000, .digit = "M", .digit_size = 1},
        {.scale = 900, .digit = "CM", .digit_size = 2},
        {.scale = 500, .digit = "D", .digit_size = 1},
        {.scale = 400, .digit = "CD", .digit_size = 2},
        {.scale = 100, .digit = "C", .digit_size = 1},
        {.scale = 90, .digit = "XC", .digit_size = 2},
        {.scale = 50, .digit = "L", .digit_size = 1},
        {.scale = 40, .digit = "XL", .digit_size = 2},
        {.scale = 10, .digit = "X", .digit_size = 1},
        {.scale = 9, .digit = "IX", .digit_size = 2},
        {.scale = 5, .digit = "V", .digit_size = 1},
        {.scale = 4, .digit = "IV", .digit_size = 2},
        {.scale = 1, .digit = "I", .digit_size = 1},
    };
    char *result = calloc(LONGEST_ROMAN_NUMBER, sizeof(char));

    char *temp = result;
    for (size_t i = 0; i < ROMAN_NUMBERS_COUNT; i++) {
        FillDigitReturn return_value = fill_digit(num, temp, roman_numbers[i]);
        num = return_value.num;
        temp = return_value.result;
    }

    return result;
}
