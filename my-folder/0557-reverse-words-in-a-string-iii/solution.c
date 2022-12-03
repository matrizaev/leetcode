char * reverseWords(char *ws){
    void reverseString(char *start, char *end){
        while (start < end){
            char temp = *start;
            *start = *end;
            *end = temp;
            start++;
            end--;
        }
    }
    char *result = ws;
    while (*ws != '\0'){
        while (*ws == ' ')
            ws++;
        char *ws_next = ws;
        while ((*ws_next != '\0') && (*ws_next != ' '))
            ws_next++;
        reverseString(ws, ws_next-1);
        ws = ws_next;
    }
    return result;
}
