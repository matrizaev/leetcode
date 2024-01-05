int mySqrt(int x) {
    
    if (x < 2)
        return x;
    
    int left = 0, right = x / 2;
    int result = x;
    while (left <= right){
        int middle = left + ((right - left) >> 1);
        long middle_squared = (long)middle * (long)middle;
        if (middle_squared == x)
            return middle;
        else if (middle_squared < x){
            result = middle;
            left = middle + 1;
        }
        else
            right = middle - 1;
    }
    return result;
}
