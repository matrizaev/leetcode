int lengthOfLastWord(char* s) {
    int result = 0;
    size_t start = 0, end = 0;
    for (size_t i = 1; s[i] != '\0'; i++){
        if (s[i] != ' '){
            if (s[i-1] == ' ')
                start = i; 
            end = i;
        }
    }
    return (end - start) + 1;
}
