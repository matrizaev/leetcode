int myAtoi(char * s){

    int result = 0;
    
    int sign = 0;
    
    if (s == NULL)
        return 0;
    
    // Ommiting whitespaces
    while (*s != 0 && *s == ' '){
        s++;
    }
    // Get the sign if it's there
   switch (*s){
       case '+':
           sign = 1;
           s++;
           break;
        case '-':
           sign = -1;
           s++;
           break;
       case 0x30 ... 0x39:
			sign = 1;
           break;
       default:
           return 0;
   }
    
    while (*s != 0){

		int remainder = 0;
        switch (*s){
            case 0x30 ... 0x39:
				remainder = *s - 0x30;
				if (result >= INT_MAX/10){
					if (sign == 1){
						if (result == INT_MAX/10 && remainder >= 7 || result > INT_MAX/10)
							return INT_MAX;
					}
					else{
						if (result == INT_MAX/10 && remainder >= 8 || result > INT_MAX/10)
							return INT_MIN;
					}
				}
                result = result*10 + remainder;
                break;
            default:
                return sign*result;
        }
        s++;
    }
    
    return sign*result;
}

