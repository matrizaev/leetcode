int getSum(int a, int b){
    while(b != 0){
        long long int summ = a ^ b;
        unsigned long long carry = (unsigned long long)(a & b) << 1;
        b = carry;
        a = summ;
    }
    return a;
}
