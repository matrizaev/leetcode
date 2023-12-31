void duplicateZeros(int* arr, int arrSize) {
    for (size_t i = 0; i < arrSize; i++){
        if (arr[i] != 0)
            continue;
        for (size_t j = (arrSize - 1); j > i; j--)
            arr[j] = arr[j-1];
        i++;
    }
}
