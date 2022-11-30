// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    unsigned int start = 1, end = n;
    if (isBadVersion(start))
        return start;
    while ((end - start) > 1){
        unsigned int middle = (start + end) / 2;
        bool is_bad_current = isBadVersion(middle);
        bool is_bad_previous = isBadVersion(middle - 1);
        if (is_bad_current && !is_bad_previous)
            return middle;
        if (is_bad_current)
            end = middle;
        else
            start = middle;
    }
    return n;
}
