double myPow(double x, int n) {
    
    long power = n;
    double result = 1;
    
    if (power < 0){
        power = -power;
        x = 1/x;
    }
    while (power){
        if (power & 1)
            result *= x;
        x *= x;
        power >>= 1;
    }
    return result;
}
