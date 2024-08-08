typedef enum {
  ROUND,
  CURLY,
  SQUARE,
  NONE
} BracketTypes;

BracketTypes map_char_to_bracket_type(char c) {
    switch (c) {
        case '(':
        case ')':
            return ROUND;
        case '{':
        case '}':
            return CURLY;
        default:
            return SQUARE;
    }
}

bool isValid(char* s) {
    
    int8_t brackets_count[3] = {0};
    BracketTypes bracket_seq[100001] = {NONE};

    ssize_t top = 0;

    while (*s) {
        BracketTypes bracket_type = map_char_to_bracket_type(*s);
        switch (*s) {
            case '(':
            case '{':
            case '[': {
                brackets_count[bracket_type]++;
                bracket_seq[++top] = bracket_type;
                break;
            }
            case ')':
            case '}':
            case ']': {
                brackets_count[bracket_type]--;
                if (top < 0 || bracket_seq[top] != bracket_type) {
                    return false;
                }
                top--;
                break;
            }
            default: break;
        }

        s++;
    }

    return brackets_count[ROUND] == 0 && brackets_count[CURLY] == 0 && brackets_count[SQUARE] == 0;
}
