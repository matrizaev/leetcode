// Function to split a string by whitespace and store words in a dynamically allocated array
int split_words(char *str, char ***words) {
    int count = 0;
    int capacity = 10; // Initial capacity for the array of words
    *words = malloc(capacity * sizeof(char *));
    if (*words == NULL) {
        return -1; // Memory allocation failed
    }

    char *token = strtok(str, " \t\n\r");
    while (token != NULL) {
        if (count >= capacity) {
            capacity *= 2; // Double the capacity
            char **new_words = realloc(*words, capacity * sizeof(char *));
            if (new_words == NULL) {
                free(*words);
                return -1; // Memory allocation failed
            }
            *words = new_words;
        }
        (*words)[count++] = token;
        token = strtok(NULL, " \t\n\r");
    }
    return count;
}

char* reverseWords(char* s) {
    char *str = strdup(s); // Duplicate the input string
    if (str == NULL) {
        return NULL; // Memory allocation failed
    }

    char **words;
    int word_count = split_words(str, &words);
    if (word_count == -1) {
        free(str);
        return NULL; // Memory allocation failed
    }

    // Calculate the total length of the reversed string
    size_t result_length = strlen(s) + 1; // +1 for the null terminator
    char *result = (char *)malloc(result_length);
    if (result == NULL) {
        free(words);
        free(str);
        return NULL; // Memory allocation failed
    }

    // Join the words in reverse order
    result[0] = '\0'; // Initialize the result string
    for (int i = word_count - 1; i >= 0; i--) {
        strcat(result, words[i]);
        if (i > 0) {
            strcat(result, " ");
        }
    }

    free(words);
    free(str);
    return result;
}
