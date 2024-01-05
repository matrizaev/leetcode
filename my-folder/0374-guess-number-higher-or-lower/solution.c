/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guessNumber(int n){
    unsigned int start = 0, end = n;
    while (start < end){
        unsigned int middle = (start + end) >> 1;
        int trial = guess(middle);
        switch(trial){
            case 0:
                return middle;
            case -1:
                end = middle - 1;
                break;
            default:
                start = middle + 1;
        }      
    }
    return start;	
}
