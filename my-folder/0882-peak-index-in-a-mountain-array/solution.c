int peakIndexInMountainArray(int* arr, int arrSize){
    int start = 0, end = arrSize - 1;
    while (start < end){
        int middle = (start + end) >> 1;
        if (arr[middle] < arr[middle+1])
            start = middle + 1;
        else
            end = middle;
    }
    return start;
}
