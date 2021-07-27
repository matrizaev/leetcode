int lengthOfLongestSubstring(char * s){
	char *start = s;
	int result = 0;
    while (*s != 0){
		
		char ch = *s;
		for (char *temp = start; temp != s; temp++){
			if (*temp == ch){
				start = temp + 1;
				break;
			}
		}
		s++;
		int running = s - start;
		if (running > result)
			result = running;
    }
    return result;
}
