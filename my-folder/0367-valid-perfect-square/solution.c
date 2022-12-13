bool isPerfectSquare(int num){

    int start = 1, end = num;
    while (start <= end){
        long middle = start + (end - middle) / 2;
        unsigned long long squared = middle * middle;
        // Check if the midpoint is a perfect square.
        if (squared == num) {
            // Found the perfect square.
            return true;
        } else if (squared > num) {
            // The perfect square is before the midpoint.
            end = middle - 1;
        } else {
            // The perfect square is after the midpoint.
            start = middle + 1;
        }
    }
    return false;
}
