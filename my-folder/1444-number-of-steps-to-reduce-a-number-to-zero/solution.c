int numberOfSteps(int num){
    return num == 0 ? 0 : log2(num) + __builtin_popcount(num);
}
