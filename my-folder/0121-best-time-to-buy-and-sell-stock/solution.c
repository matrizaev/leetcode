int maxProfit(int* prices, int pricesSize) {
    int min_price = prices[0];
    int max_profit = 0;
    for (size_t i = 1; i < pricesSize; i++){
        if (min_price > prices[i])
            min_price = prices[i];
        else {
            int profit = (prices[i] - min_price);
            if (max_profit < profit)
                max_profit = profit;
        }
    }
    return max_profit;
}
