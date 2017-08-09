/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    static int targetArray[2];
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++ ) {
            if (nums[i] + nums[j] == target) {
                targetArray[0] = i;
                targetArray[1] = j;
            }
        }
    }
    return targetArray;
}
