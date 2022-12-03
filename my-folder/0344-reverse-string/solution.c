void reverseString(char* s, int sSize){
    int start = 0, end = sSize;
    while (start < end){
        end--;
        int temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
    }
}
