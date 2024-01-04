int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int heightChecker(int* heights, int heightsSize) {
    int result = 0;

    int sorted[heightsSize];
    memcpy(sorted, heights, heightsSize * sizeof(int));

    qsort(sorted, heightsSize, sizeof(int), cmpfunc);

    for (size_t i = 0; i < heightsSize; i++){
        if (heights[i] != sorted[i])
            result++;
    }
    return result;
}
