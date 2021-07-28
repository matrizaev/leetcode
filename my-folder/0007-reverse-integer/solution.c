int reverse(int x){
    int result = 0;
    while (x != 0){
		int remainder = x % 10;
		
		if ((result > INT_MAX/10 || result == INT_MAX/10 && remainder > 7) ||
			(result < INT_MIN/10 || result == INT_MIN/10 && remainder < -8))
			return 0;
		
		result = result * 10 + remainder;
		x = x / 10;
    }
    return result;
}
