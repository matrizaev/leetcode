

bool validMountainArray(int* arr, int arrSize){
    bool peakFound = false;
    if (!arr || (arrSize < 3) || (arr[0] > arr[1]))
        return false;
    for (size_t i = 1; i < arrSize; i++){
        if (arr[i] == arr[i-1])
            return false;
        if (!peakFound && (arr[i] < arr[i-1]))
            peakFound = true;
        else if (peakFound && (arr[i] > arr[i-1]))
            return false;
    }
    return peakFound;
}
