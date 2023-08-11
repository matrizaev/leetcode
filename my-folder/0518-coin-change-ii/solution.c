int change(int amount, int* coins, int coinsSize){

    // Array containing the number of ways to make the amounts from 0 to
    // the target amount
    int dp[amount + 1];

    // Initialize the array
    dp[0] = 1;
    for (size_t i = 1; i <= amount; i++)
        dp[i] = 0;

    // For each coin in available coins
    for (size_t i = 0; i < coinsSize; i++){
        int coin = coins[i];

        // Update the ways array so that
        // we take the number of ways to make j-coin and add them to j-th target
        for (size_t j = coin; j <= amount; j++){
            dp[j] += dp[j - coin];
        }
    }
    return dp[amount];
}
