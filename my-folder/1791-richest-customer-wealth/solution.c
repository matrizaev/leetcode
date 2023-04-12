int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int result = 0;
    for (int i = 0; i < accountsSize; i++){
        int sum = accounts[i][0];
        for (int j = 1; j < *accountsColSize; j++){
            sum += accounts[i][j];
        };
        if (sum > result)
            result = sum;
    }
    return result;
}
