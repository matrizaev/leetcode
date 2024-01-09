char nextGreatestLetter(char* letters, int lettersSize, char target) {
    ssize_t left = 0, right = lettersSize;
    while (left < right){
        size_t middle = left + ((right - left) >> 1);
        if (letters[middle] > target)
            right = middle - 1;
        else
            left = middle + 1;
    }
    if (left > (lettersSize - 1) || left < 0)
        return letters[0];
    if (letters[left] <= target)
        return letters[++left];
    return letters[left];
}
