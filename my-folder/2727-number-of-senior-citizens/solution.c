int countSeniors(char ** details, int detailsSize){
    int result = 0;
    for (size_t i = 0; i < detailsSize; i++) {
        result += (details[i][11] > '6' || (details[i][11] == '6' && details[i][12] > '0')) ? 1 : 0;
    }
    return result;
}
