bool canJump(int* nums, int numsSize) {
    // if (numsSize <= 1)
    //     return true;

    // bool result = false;
    // int max_jump = nums[0];
    // while (max_jump) {
    //     result = canJump(&nums[max_jump], numsSize - max_jump);
    //     if (result)
    //         break;
    //     max_jump--;
    // }

    // return result;

    if (numsSize <= 1) {
        return true;
    }

    int max_reachable = 0;
    for (int i = 0; i < numsSize; i++) {
        if (i > max_reachable) {
            return false;
        }
        if (i + nums[i] > max_reachable) {
            max_reachable = i + nums[i];
        }
        if (max_reachable >= numsSize - 1) {
            return true;
        }
    }

    return false;

}
