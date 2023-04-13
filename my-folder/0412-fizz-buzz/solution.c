/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** fizzBuzz(int n, int* returnSize){
    char **result = malloc(n * sizeof(char *));
    *returnSize = n;

    for (int i = 1; i <= n; i++){
        bool d3 = i % 3 == 0;
        bool d5 = i % 5 == 0;
        if (d3 && d5)
            result[i-1] = strdup("FizzBuzz");
        else if (d3)
            result[i-1] = strdup("Fizz");
        else if (d5)
            result[i-1] = strdup("Buzz");
        else {
            result[i-1] = malloc(10 * sizeof(char));
            snprintf(result[i-1], 10, "%d", i);
        }
    }
    return result;
}
