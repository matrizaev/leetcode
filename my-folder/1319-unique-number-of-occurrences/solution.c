bool uniqueOccurrences(int* arr, int arrSize){
    #define MAX_LENGTH 2001
    int freq[MAX_LENGTH] = {0};
    int freq2[MAX_LENGTH] = {0};
    for (int i = 0; i < arrSize; i++){
        freq[arr[i]+1000]++;
    }
    for (int i = 0; i < MAX_LENGTH; i++){
        if (freq[i] == 0)
            continue;
        if (freq2[freq[i]] == 1)
            return false;
        freq2[freq[i]]++;
    }
    return true;
}
