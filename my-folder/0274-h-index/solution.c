int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int hIndex(int* citations, int citationsSize) {
    qsort(citations, citationsSize, sizeof(int), compare);

    int j = 0;
    for (size_t i = 0; i < citationsSize; i++) {
        if (citations[i] >= (i + 1))
            j = (i+1);
        else
            break;
    }
    return j;
}
