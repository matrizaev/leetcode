bool checkIfExist(int* arr, int arrSize) {
    for (size_t i = 0; i < arrSize-1; i++)
        for (size_t j = i + 1; j < arrSize; j++){
            if ((arr[i] == 2 * arr[j]) || (2 * arr[i] == arr[j]))
                return true;
        }
    return false;
}
